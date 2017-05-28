#include "monty.h"
/**
 *
 *
 *
 *
 */
void free_everything(char *buff, stack_t **stack)
{
  free(buff);
  free(globals);
  free_stack(stack);
}
