#include "monty.h"
/**
 * op_sub - Subtracts first two values of stack
 * @stack: doubly linked list of integers
 * @line_number: line of the file passed to monty
 *
 * Description: The first node's value is set to the result
 * the second node is then removed
 */
void op_sub(stack_t **stack, unsigned int line_number)
{
  stack_t *ptr;

  if ((*stack == NULL) || (stack_len(*stack) < 2))
    {
      printf("L%d: can't sub, stack too short\n", line_number);
      globals->err_val = EXIT_FAILURE;
      return;
    }

  ptr = (*stack)->next;
  (*stack)->n = ptr->n - (*stack)->n;
  (*stack)->next = ptr->next;
  
  if (ptr->next != NULL)
    ptr->next->prev = *stack;
  free(ptr);
}
