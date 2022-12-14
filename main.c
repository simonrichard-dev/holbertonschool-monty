#include "monty.h"

int error = 0;

/**
 * main - opens a .m file and executes it
 * @argc: number of arguments, should be 2
 * @argv: array of command line arguments
 * Return: Success(0), Error(EXIT_FAILURE)
 */

int main(int argc, char const **argv)
{
	FILE *ptr;
	char *line = NULL, *token = NULL;
	size_t size = 0;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2) /*check the argc input value*/
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	ptr = fopen(argv[1], "r"); /*new value for ptr*/
	if (ptr == NULL) /*check if ptr can be open*/
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	/*begin a loop that find what to do*/
	while (getline(&line, &size, ptr) != -1 && error != 1)
	{
		line_number++;
		token = strtok(line, "\n\t ");
		if (token == NULL || strncmp(token, "#", 1) == 0)
			continue;
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, "\n\t ");
			stack_push(token, &stack, line_number);
		}
		else
			get_op(token, &stack, line_number); /*remplacer par la bonne fonction*/
	}
	free_all(stack, line, ptr); /*remplacer par la bonne fonction*/
	if (error == 1)
		exit(EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
