#include "monty.h"
/**
 * op_pall - print all the values on the stack
 * @stack: doubly linked list
 * @line_number: line number where op_code is located in file passed to monty
 *
 */
void op_pall(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr = NULL;

	if ((stack == NULL) || (*stack == NULL))
		return;
/* line_number is used to find number of nodes in the stack */
	line_number = stack_len(*stack);
	if (line_number == 0)
		return;
	for (ptr = *stack; ptr != NULL; ptr = ptr->next)
	{
		printf("%d\n", ptr->n);
	}
}

/**
 * op_pint - prints the value at the top of the stack
 * @stack: doubly linked list
 * @line_number: line number where op_code is located in file passed to monty
 *
 */
void op_pint(stack_t **stack, unsigned int line_number)
{
	if ((stack == NULL) || (*stack == NULL))
	{
		printf("L%d: can't pint, stack empty\n", line_number);
		globals->err_val = EXIT_FAILURE;
		return;
	}
	printf("%d\n", (*stack)->n);
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
