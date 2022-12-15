#include "monty.h"

/**
 * stack_pchar - prints char at the top of the stack.
 * @stack: list
 * @line_number: number of line of the command
 */

void stack_pchar(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
		error = 1;
		return;
	}
	if ((*stack)->n > 127 || (*stack)->n  < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
		error = 1;
		return;
	}
	putchar((*stack)->n);
	putchar('\n');
}
