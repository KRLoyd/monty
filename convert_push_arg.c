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
	/* 	printf("L%d: usage: push integer\n", fileline); */
	/* 	globals->err_val = EXIT_FAILURE; */
	/* 	return; */
	/* } */
	globals->push_val = atoi_result;
	return;
}
