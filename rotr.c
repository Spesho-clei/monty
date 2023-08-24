#include "monty.h"

/**
 * f_rotr - Rotates the stack to the bottom.
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void f_rotr(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
		return;

	stack_t *last = *stack;

	while (last->next)
		last = last->next;

	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	(*stack)->prev = last;
	*stack = last;
}
