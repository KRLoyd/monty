#include "monty.h"
/**
 * op_pall - print all the values on the stack
 * 
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
  stack_t *ptr;

  line_number = stack_len(ptr);
  if(line_number == 0)
    return;
  for(ptr = *stack; ptr != NULL; ptr = ptr->next)
    {
      printf("%d\n", ptr->n);
    }
}
