#include "monty.h"
/**
 * check_args - checks that 1 file was passed to monty
 * @argc: number of arguments
 *
 * Return: 0 (SUCCESS), 1 (FAILURE)
 */
int check_args(int argc)
{
	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		globals->err_val = EXIT_FAILURE;
	}
	return (globals->err_val);
}

/**
 * check_push_val - checks push_val
 * @push_val: integer to be evaluated
 * @line_number: lone the op_code was found in the file passed to monty
 *
 * Description: checks if push_val exists and is an integer
 */
void check_push_val(int push_val, unsigned int line_number)
{

	/* check that push_val is an integer */
	printf("check_push: before _isdigit check\n");
	if ((isdigit(push_val) == 0))
	{
		printf("L%d: usage: push integer\n", line_number);
		globals->err_val = EXIT_FAILURE;
	}
}
