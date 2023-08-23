#include "monty.h"
/**
 * f_printchar - Implements the pchar opcode. Prints the char at the top of the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void f_printchar(stack_t **head, unsigned int line_number)
{
    if (*head == NULL)
    {
        fprintf(stderr, "L%d: can't pchar, stack empty\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*head)->n < 0 || (*head)->n > 127)
    {
        fprintf(stderr, "L%d: can't pchar, value out of range\n", line_number);
        exit(EXIT_FAILURE);
    }

    putchar((*head)->n);
    putchar('\n');
}
