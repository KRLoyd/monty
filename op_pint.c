#include "monty.h"
/**
 *
 *
 *
 *
 *
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
	printf("pint: in pint\n");
	if (*stack == NULL)
	  {
	    printf("L%d: can't pint, stack empty\n", line_number);
	    globals->err_val = EXIT_FAILURE;
	    return;
	  }
	printf("pint: after stack check, before access\n");
	printf("%d\n", (*stack)->n);
	return;
}
