#include "monty.h"

/**
 * f_sub - Subtracts the top element from the second top element of the stack.
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void f_sub(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	stack_t *temp = *stack;
	(*stack)->next->n -= (*stack)->n;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;

	free(temp);
}
