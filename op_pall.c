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

/**
 * stack_len - finds the number of nodes in a stack_t list
 * @stack: doubly linked list to evaluate
 *
 * Return: length of stack_t list
 */
unsigned int stack_len(stack_t *stack)
{
  stack_t *ptr;
  unsigned int total = 0;

  for(ptr = stack; ptr != NULL; ptr = ptr->next)
    total++;
  return(total);
}
