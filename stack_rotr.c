#include "monty.h"

/**
 * stack_rotr - rotates stack to the bottom
 * @stack: list
 * @line_number: number of line of the command
 */

void stack_rotr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	while (temp->next)
		temp = temp->next;
	temp->prev->next = NULL;
	(*stack)->prev = temp;
	temp->next = *stack;
	temp->prev = NULL;
	*stack = temp;
}
