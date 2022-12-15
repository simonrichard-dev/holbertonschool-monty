#include "monty.h"

/**
 * stack_pstr - prints string at the top of the stack.
 * @stack: list
 * @line_number: number of line of the command
 */

void stack_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)line_number;

	if (*stack == NULL)
	{
		putchar('\n');
		return;
	}
	while (temp && temp->n != 0 && temp->n < 127 && temp->n > 0)
	{
		putchar(temp->n);
		temp = temp->next;
	}
	putchar('\n');
}
