#include "monty.h"
/**
 * op_swap - swaps the first two values of the stack
 * @stack: doubly linked list of integers
 * @line_number: line of the file passed to monty
 *
 */
void op_swap(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;
	int temp;

	if ((*stack == NULL) || (stack_len(*stack) < 2))
	{
		printf("L%d: can't swap, stack too short\n", line_number);
		globals->err_val = EXIT_FAILURE;
		return;
	}
	ptr = (*stack)->next;
	temp = (*stack)->n;
	(*stack)->n = ptr->n;
	ptr->n = temp;
	return;
}
