#include "monty.h"

/**
 * f_push - Pushes an element to the stack.
 * @stack: Double pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void f_push(stack_t **stack, unsigned int line_number)
{
	char *arg = bus.arg;

	if (!arg || !is_number(arg))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}

	addnode(stack, atoi(arg));
}

/**
 * f_pall - Prints all values on the stack.
 * @stack: Pointer to the head of the stack
 * @line_number: Line number of the instruction
 */
void f_pall(stack_t **stack, unsigned int line_number)
{
	(void)line_number;

	stack_t *current = *stack;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

/**
 * is_number - Checks if a string represents a valid integer.
 * @str: String to be checked
 * Return: 1 if the string is a number, 0 otherwise
 */
int is_number(const char *str)
{
	if (!str || *str == '\0')
		return 0;

	if (*str == '-' || *str == '+')
		str++;

	while (*str)
	{
		if (!isdigit(*str))
			return 0;
		str++;
	}

	return 1;
}
