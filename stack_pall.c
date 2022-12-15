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
<<<<<<< HEAD

	(void)line_number;
=======
	(void)line_number;

>>>>>>> e23937a36240522e8c888e80d99885d5ed884de9
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
