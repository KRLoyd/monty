#include "monty.h"
/**
 * op_mod - divides the second element in the stack by the top element
 * @stack: doubly linked list
 * @line_number: line in the file passed to monty
 *
 * Description: the result is stored in the first element.
 * The second element is removed from the stack.
 */
void op_mod(stack_t **stack, unsigned int line_number)
{
	stack_t *ptr;

	if ((*stack == NULL) || (stack_len(*stack) < 2))
	{
		printf("L%d: can't mod, stack too short\n", line_number);
		globals->err_val = EXIT_FAILURE;
		return;
	}
	if ((*stack)->n == 0)
	{
		printf("L%d: division by zero\n", line_number);
		globals->err_val = EXIT_FAILURE;
		return;
	}
	ptr = (*stack)->next;
	(*stack)->n = ptr->n / (*stack)->n;
	(*stack)->next = ptr->next;
	if (ptr->next != NULL)
		ptr->next->prev = *stack;
	free(ptr);
}
