#include "monty.h"
/**
 * op_pall - print all the values on the stack
 * 
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = NULL;

/* line_number is used to find number of nodes in the stack */
	line_number = stack_len(*stack);
	if(line_number == 0)
		return;
	for(ptr = *stack; ptr != NULL; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
	}
	return;
}

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
