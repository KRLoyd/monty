#include"monty.h"
/**
 * stack_len - finds the number of nodes in a stack_t list
 * @stack: doubly linked list to evaluate
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
