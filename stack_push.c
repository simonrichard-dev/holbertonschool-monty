#include "monty.h"

/**
 * stack_push - push an element to a stack
 * @stack: stack to push to
 * @line_number: line to push stack to
 * Return: 0 or EXIT_FAILURE
 */

void stack_push(char *token, stack_t **stack, unsigned int line_number)
{
	int i;
	stack_t *node;

	if (token == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		return;
	}
	for (i = 0; token[i] != '\0'; i++)
	{
		if (token[i] == '-')
			i++;
		if (isdigit(token[i]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			return;
		}
	}

	node = malloc(sizeof(stack_t));

	if (node == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	node->n = atoi(token);
	node->prev = NULL;
	node->next = NULL;

	if (*stack)
	{
		(*stack)->prev = node;
		node->next = *stack;
	}
	*stack = node;
}
