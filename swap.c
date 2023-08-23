#include "monty.h"
/**
 * f_swap - Implements the swap opcode. Swaps the top two elements of the stack.
 * @head: Double pointer to the head of the stack.
 * @line_number: Line number in the file.
 */
void f_swap(stack_t **head, unsigned int line_number)
{
    if (*head == NULL || (*head)->next == NULL)
    {
        fprintf(stderr, "L%d: can't swap, stack too short\n", line_number);
        exit(EXIT_FAILURE);
    }

    int temp = (*head)->n;
    (*head)->n = (*head)->next->n;
    (*head)->next->n = temp;
}
