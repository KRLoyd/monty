#include"monty.h"
/**
 *
 *
 *
 */
void (*find_func(unsigned int fileline, char *tok_args))(unsigned int fileline,stack_t **stack)
{
  instruction_t ops[] = {
    /*    {"push", op_push},*/
    {"pall", op_pall},
    /* {"pint", op_pint},
    {"pop", op_pop},
    {"swap", op_swap},
    {"add", op_add},
    {"nop", op_nop}, */
    {NULL, NULL}
  };
  int i;
  /* void (*f)(stack_t **stack, unsigned int line_number); */
    
  for(i = 0; ops[i].opcode != NULL; i++)
    {
      if(tok_args == ops[i].opcode)
	return(ops[i].f);
    }
  if (ops[i].opcode == NULL)
    {
      printf("L %d: unknown instruction %s", fileline, ops[i].opcode);
      globals->err_val = EXIT_FAILURE;
      return NULL; /* is this right? what we wanted? */
    }
}
