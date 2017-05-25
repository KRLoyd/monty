#include"monty.h"
/**
 *
 *
 *
 */
void (*find_func(int fileline, char *tok_args))(char **tok_args, int fileline)
{
	instruction_t ops = /* create all the functions */;

	for (i = 0; ops[i].op_code != NULL; i++)
	{
		if (tok_args == ops[i].op_code)
			return(ops[i].f);
	}
	if (ops[i].opcode == NULL)
	{
		printf("L %d: unknown instruction %s", fileline, ops[i].opcode);
		globals->err_val = EXIT_FAILURE;
		return NULL; /* is this right? what we wanted? */
	}
}
