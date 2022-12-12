#include "monty.h"

/**
 * stack_pall - prints values on the stack
 * @stack: stack to print from
 * @line_number: line number
 * Reurn: 0 or EXIT_FAILURE
 */

void stack_pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack == NULL)
		return;

	while (*stack != NULL)
	{
		printf("%d\n", (*stack)->n);
		*stack = (*stack)->next;
	}
}
