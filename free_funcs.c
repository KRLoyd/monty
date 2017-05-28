#include "monty.h"
/**
 * free_everything - calls all free functions
 * @buff: char pointer to free
 * @stack: doubly linked list to free
 *
 */
void free_everything(char *buff, stack_t **stack)
{
	free(buff);
	free(globals);
	free_stack(stack);
}

/**
 * free_pointers - function to free double pointers
 * @ptr: pointer to pointer passed to be freed
 * Return: void
 */
void free_pointers(char **ptr)
{
	int i;

	for (i = 0; ptr[i] != NULL; i++)
	{
		free(ptr[i]);
	}
	free(ptr);
}

/**
 * free_stack - frees a doubly linked list
 * @stack: doubly linked list to free
 *
 */
void free_stack(stack_t **stack)
{
	stack_t *tmp;

	if (stack == NULL)
		return;
	while (*stack != NULL)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp->prev);
		free(tmp->next);
		free(tmp);
	}
}
