#include "monty.h"

/**
 * stack_rotl - rotates stack to the top
 * @stack: list
 * @line_number: number of line of the command
 */

void stack_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	stack_t *last;

	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last = *stack;

	while (last->next)
		last = last->next;
	last->next = temp;
	temp->prev = last;
	temp->next = NULL;
}
