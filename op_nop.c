#include "monty.h"
/**
 * op_nop - does nothing!
 * @stack: doubly linked list
 * @line_number: line number in file passed to monty
 *
 */
void op_nop(stack_t **stack, unsigned int line_number)
{

  stack_t *ptr;
  int num;

  if (stack == NULL || *stack == NULL)
    return;
  ptr = *stack;
  num = (int)line_number;
  num += ptr->n;
}
