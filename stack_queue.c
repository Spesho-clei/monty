#include "monty.h"

/**
 * f_stack - Sets the format of the data to a stack (LIFO).
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void f_stack(stack_t **stack, __attribute__((unused)) unsigned int line_number)
{
	(void)line_number;
	(void)stack;
}

/**
 * f_queue - Sets the format of the data to a queue (FIFO).
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void f_queue(stack_t **stack, __attribute__((unused)) unsigned int line_number)
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
