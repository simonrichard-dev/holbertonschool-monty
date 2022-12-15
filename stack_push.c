#include "monty.h"

/**
 * stack_push - push an element to a stack
 * @token: number to add in node
 * @stack: stack to push to
 * @line_number: line to push stack to
 * Return: 0 or EXIT_FAILURE
 */

void stack_push(char *token, stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	int i;

	if (token == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		error = 1;
		return;
	}
	for (i = 0; token[i] != '\0'; i++)
	{
		if (token[i] == '-')
			i++;
		if (isdigit(token[i]) == 0)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			error = 1;
			return;
		}
	}
	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		perror("Error: malloc failed\n");
		error = 1;
		return;
	}
	new->n = atoi(token);
	new->prev = NULL;
	new->next = NULL;

	if (*stack)
	{
		(*stack)->prev = new;
		new->next = *stack;
	}
	*stack = new;
}
