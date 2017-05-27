#include"monty.h"
/**
 * stack_len - finds the number of nodes in a stack_t list
 * @stack: doubly linked list to evaluate
 * Return: length of stack_t list
 */
unsigned int stack_len(stack_t *stack)
{
	stack_t *ptr;
	unsigned int total = 0;
	
	if (stack == NULL)
		return (total);

	ptr = stack;
	while (ptr != NULL)
	{
		total++;
		ptr = ptr->next;
	}
	return (total);
}
