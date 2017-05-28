#include"monty.h"
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
/*		{"nop", op_nop}, */
		{"div", op_div},
		{"mod", op_mod},
		{"mul", op_mul},
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
		printf("L %d: unknown instruction %s", fileline, ops[i].opcode);
		globals->err_val = EXIT_FAILURE;
		return NULL; /* is this right? what we wanted? */
	}
	return NULL;
}
