#include "monty.h"

/**
 * stack_pall - prints values on the stack
 * @stack: stack to print from
 * @line_number: line number
 * Reurn: 0 or EXIT_FAILURE
 */

void stack_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)line_number;

	while (temp)
	{
		printf("%d\n", temp->n);
		*stack = temp->next;
	}
}
