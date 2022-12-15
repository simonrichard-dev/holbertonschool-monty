#include "monty.h"

/**
 * stack_add - add the top two elements of the stack.
 * @stack: list
 * @line_number: number of line of the command
 * Return: always 0
 */

void stack_add(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		error = 1;
		return;
	}
	(*stack)->next->n += (*stack)->n;
	stack_pop(stack, line_number);
}
