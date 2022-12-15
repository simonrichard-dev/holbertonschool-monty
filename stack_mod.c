#include "monty.h"

/**
 * stack_mod - computes the remainder of two elements
 * @stack: list
 * @line_number: number of line of the command
 * Return: always 0
 */

void stack_mod(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		error = 1;
		return;
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		error = 1;
		return;
	}
	(*stack)->next->n %= (*stack)->n;
	stack_pop(stack, line_number);
}
