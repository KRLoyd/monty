#include "monty.h"
/**
 * op_pop - prints the value at the top of the stack
 * @stack: stack to evaluate
 * @line_number: line where op_code is located
 *
 */
void op_pop(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	if (*stack == NULL)
	{
		printf("L%d: can't pop an empty stack\n", line_number);
		globals->err_val = EXIT_FAILURE;
		return;
	}
	ptr = *stack;
	if (ptr->next != NULL)
	{		
		ptr->next->prev = NULL;
	}
	*stack = ptr->next;
	free(ptr);
	return;
}
