#include "monty.h"
/**
 * f_sub - Implements the sub opcode. Subtracts the top element of the stack
 * from the second top element of the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void f_sub(stack_t **head, unsigned int line_number)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't sub, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n -= (*head)->n;
    f_pop(head, line_number);
}
