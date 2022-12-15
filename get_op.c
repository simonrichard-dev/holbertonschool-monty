#include "monty.h"
/**
 * get_op - get opcode function
 * @cmd: opcode command
<<<<<<< HEAD
 * @stack: data structure
 * @line_number: number of the line to show
=======
 * @stack: the list
 * @line_number: number of line of the command
>>>>>>> e23937a36240522e8c888e80d99885d5ed884de9
 * Return: function
 */

int get_op(char *cmd, stack_t **stack, unsigned int line_number)
{
	instruction_t ops[] = {
		{"pall", stack_pall},
<<<<<<< HEAD
		{"push", stack_push},
=======
		{"pint", stack_pint},
>>>>>>> e23937a36240522e8c888e80d99885d5ed884de9
		{"pop", stack_pop},
		{"swap", stack_swap},
		{"add", stack_add},
		{"nop", stack_nop},
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
