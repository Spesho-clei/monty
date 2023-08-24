#include "monty.h"

/**
 * f_pstr - Prints the string starting from the top of the stack.
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void f_pstr(stack_t **stack, unsigned int line_number)
{
	(void)line_number; // Unused parameter

	stack_t *current = *stack;

	while (current && current->n > 0 && current->n <= 127)
	{
		if (current->n == '\0')
			break;

		printf("%c", current->n);
		current = current->next;
	}

	printf("\n");
}
