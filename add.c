#include "monty.h"
/**
 * f_add - Implements the add opcode. Adds the top two elements of the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void f_add(stack_t **head, unsigned int line_number)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n += (*head)->n;
    f_pop(head, line_number);
}
