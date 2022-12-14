#include "monty.h"

/**
 * stack_pop - removes the top element of the stack.
 * @stack: List
 * @line_number: Number of the list
 * Return: always 0
 */

void pop_stack(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_number);
		return;
	}
	*stack = (*stack)->next;
	if (*stack)
		(*stack)->prev = NULL;
	free(temp);
}
