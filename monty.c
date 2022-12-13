#include "monty.h"

/**
 * main - opens a monty script file and executes it
 * @argc: number of arguments, should be 2
 * @argv: array of command line arguments
 * Return: Success(0), Error(EXIT_FAILURE)
 */

int main(int argc, char const *argv[])
{
	if (argc == 1)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	if (fopen(argv[1], "r") == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}
	get_op(argv[0]);

	return (0);
}
