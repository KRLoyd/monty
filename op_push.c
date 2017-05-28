#include "monty.h"
/**
 * op_push - pushes an element to the stack
 * @stack - doubly linked list of integers
 * @line_number - line of the .txt file passed to monty
 *
 */
void op_push(stack_t **stack, unsigned int line_number)
{
	stack_t *new;
	int isdigit_result;
	
	if (stack == NULL)
/* add error here */
		printf("stack is NULL\n"); 

	isdigit_result = isdigit(globals->push_val);
	if (isdigit_result != 0)
	{
		globals->err_val = EXIT_FAILURE;
		printf("L%d: usage: push integer\n", line_number);
		return;
	}
	/* malloc space for new node */
	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		printf("Error: malloc failed\n");
		globals->err_val = EXIT_FAILURE;
		return;
	}
	if (*stack)
	{
		(*stack)->prev = new;
	}
	new->next = *stack;
	new->prev = NULL;
	new->n = globals->push_val;

	*stack = new;
}
