#include "monty.h"

/**
 * f_rotl - Rotates the stack to the top.
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void f_rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	if (*stack == NULL || (*stack)->next == NULL)
		return;

	stack_t *last = *stack;
	stack_t *secondLast = *stack;

	while (last->next)
		last = last->next;

	*stack = (*stack)->next;
	(*stack)->prev = NULL;

	last->next = secondLast;
	secondLast->prev = last;
	secondLast->next = NULL;
}
