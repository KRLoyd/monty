#include"monty.h"
/**
 *
 *
 *
 */
char **parse_check(char **buff)
{
	char **tok_args;
	
	/* don't forget to free tok_args! (In main) */
	printf("parse_check: before buff check\n");
	if (buff == NULL)
	{
		printf("ERROR: cannot parse buff\n");
		globals->err_val = EXIT_FAILURE;
		return (NULL);
	}

	else
	{
		printf("parse_check: buff not null\n");
		printf("parse_check: before malloc for tok_args\n");
		tok_args = malloc(sizeof(char *) * BUFFSIZE);
		if (tok_args == NULL)
		{
			printf("ERROR: malloc failed\n");
			globals->err_val = EXIT_FAILURE;
		}
		printf("parse_check: malloc'd space for tok_args!\n");
	}
	return(tok_args);
}
