#include "monty.h"
/**
 * get_op - get opcode function
 * @cmd: opcode command
 * Return: function
 */

int get_op(char *cmd, stack_t **stack, unsigned int line_number)
{
	unsigned int i = 0;

	instruction_t ops[] = {
		{"pall", stack_pall},
		{"pop", stack_pop},
		{"swap", stack_swap},
		{NULL, NULL}
	};

	for (i = 0; ops[i].opcode != NULL; i++)
	{
		if (strcmp(cmd, ops[i].opcode) == 0)
		{
			ops[i].f(stack, line_number);
			return (EXIT_SUCCESS);
		}
	}
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, cmd);
	exit(EXIT_FAILURE);
}
