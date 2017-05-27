#include "monty.h"
/**
 *
 *
 *
 */
int check_args(int argc)
{
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		globals->err_val = 1;
	}
	return globals->err_val;
}
