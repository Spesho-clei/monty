#include "monty.h"
/**
 * f_mod - Implements the mod opcode. Computes the remainder of the division
 * of the second top element of the stack by the top element of the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void f_mod(stack_t **head, unsigned int line_number)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    if ((*head)->n == 0)
    {
        fprintf(stderr, "L%d: division by zero\n", line_number);
        exit(EXIT_FAILURE);
    }

    (*head)->next->n %= (*head)->n;
    f_pop(head, line_number);
}
