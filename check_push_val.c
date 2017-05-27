#include "monty.h"
/**
 * check_push_val - checks push_val
 * @push_val: integer to be evaluated
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
