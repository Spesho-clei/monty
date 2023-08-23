#include "monty.h"
/**
 * f_pall - Implements the pall opcode. Prints all values on the stack.
 * @head: Pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void f_pall(stack_t **head, __attribute__((unused)) unsigned int line_number)
{
	stack_t *current = *head;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}
