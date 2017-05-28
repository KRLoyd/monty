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
