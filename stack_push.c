#include "monty.h"

/**
 * stack_push - push an element to a stack
 * @stack: stack to push to
 * @line_number: line to push stack to
 * Return: 0 or EXIT_FAILURE
 */

void stack_push(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	stack_t *node;

	node = malloc(sizeof(stack_t));

	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	node->prev = NULL;

	if (*stack == NULL)
		node->next = NULL;

	else
	{
		node->next = *stack;
		(*stack)->prev = node;
	}

	*stack = node;
}
