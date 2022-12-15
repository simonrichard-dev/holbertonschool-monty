#include "monty.h"

/**
 * stack_push - push an element to a stack
<<<<<<< HEAD
 * @token: number to add in node
=======
 * @token: token
>>>>>>> e23937a36240522e8c888e80d99885d5ed884de9
 * @stack: stack to push to
 * @line_number: line to push stack to
 * Return: 0 or EXIT_FAILURE
 */

void stack_push(char *token, stack_t **stack, unsigned int line_number)
{
<<<<<<< HEAD
	stack_t *new = NULL;
	int i;

	if (token == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
=======
	int i;
	stack_t *node;

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

	node = malloc(sizeof(stack_t));

	if (node == NULL)
	{
		perror("Error: malloc failed\n");
>>>>>>> e23937a36240522e8c888e80d99885d5ed884de9
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

<<<<<<< HEAD
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
=======
	node->n = atoi(token);
	node->prev = NULL;
	node->next = NULL;

	if (*stack)
	{
		(*stack)->prev = node;
		node->next = *stack;
	}
	*stack = node;
>>>>>>> e23937a36240522e8c888e80d99885d5ed884de9
}
