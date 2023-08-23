#include "monty.h"
/**
 * f_push - Implements the push opcode. Pushes an element onto the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void f_push(stack_t **head, unsigned int line_number)
{
	int value;

	if (bus.arg == NULL || !is_number(bus.arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	value = atoi(bus.arg);
	add_node(head, value);
}
