#include "monty.h"
/**
 * get_op - get opcode function
 * @cmd: opcode command
 * @stack: data structure
 * @line_number: number of the line to show
 * Return: function
 */

int get_op(char *cmd, stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
		{"pall", stack_pall},
		{"push", stack_push},
		{"pop", stack_pop},
		{"swap", stack_swap},
		{NULL, NULL}
	};

	int i;

	for (i = 0; ops[i].opcode != NULL; i++)
	{
		if (strcmp(cmd, ops[i].opcode) == 0)
		{
			ops[i].f(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, cmd);
	error = 1;
	exit(EXIT_FAILURE);
}
