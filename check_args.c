#include "monty.h"
/**
 *
 *
 *
 */
int check_args(int argc)
{
	printf("Check_args: we are in the file!\n");
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		globals->err_val = 1;
	}
	printf("Check_args: before return\n");
	return globals->err_val;
}
