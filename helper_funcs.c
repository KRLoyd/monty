#include "monty.h"
/**
 * convert_push_arg - 
 *
 *
 *
 */
void convert_push_arg(char *tok_arg, int fileline)
{
	int atoi_result;


	if (tok_arg == NULL)
	{
		printf("L%d: usage: push integer\n", fileline);
		globals->err_val = EXIT_FAILURE;
		return;
	}
	atoi_result = atoi(tok_arg);
	/* isdigit_result = isdigit(atoi_result); */
	/* printf("convert: atoi_result: %d\n", atoi_result); */
	/* if (isdigit_result != 0) */
	/* { */
	/* printf("L%d: usage: push integer\n", fileline); */
	/* globals->err_val = EXIT_FAILURE; */
	/* return; */
	/* } */
	globals->push_val = atoi_result;
	return;
}

/**
 * make_struct - mallocs space for global_s struct
 * 
 * Return: 0 (SUCCESS), 1 (FAILURE)
 */

int make_struct()
{
	globals = malloc(sizeof(struct global_s));
	if (globals == NULL)
	{
		printf("Error: malloc failed");
		return (1);
	}
	return (0);
} 

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

/**
 *
 *
 *
 */
void (*find_func(unsigned int fileline, char **tok_args))(stack_t **stack, unsigned int fileline)
{
	instruction_t ops[] = {
		{"push", op_push},
		{"pall", op_pall},
		{"pint", op_pint},
		{"pop", op_pop},
		{"swap", op_swap},
		{"add", op_add},
		{"nop", op_nop},
		{"div", op_div},
		{"mod", op_mod},
		{"mul", op_mul},
		{"sub", op_sub},
		{NULL, NULL}
	};
	int i;
    
	for(i = 0; ops[i].opcode != NULL; i++)
	{
		if(strcmp(tok_args[0], ops[i].opcode) == 0)
		{
			if (i == 0)
			{
				convert_push_arg(tok_args[1], fileline);
				if (globals->err_val == EXIT_FAILURE)
					return NULL;
			}
			return(ops[i].f);
		}
	}
	if (ops[i].opcode == NULL)
	{
		printf("L %d: unknown instruction %s", fileline, tok_args[0]);
		globals->err_val = EXIT_FAILURE;
		return NULL; /* is this right? what we wanted? */
	}
	return NULL;
}
