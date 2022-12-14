#include "monty.h"

/**
 * stack_swap - swaps the top two elements of the stack
 * @stack: List
 * @line_number: Number of list
 * Return: always 0
 */

void stack_swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
		return;
	}
	temp = (*stack)->n;
	(*stack)->n = (*stack)->next->n;
	(*stack)->next->n = temp;
}
