#include"monty.h"
/**
 *
 *
 *
 */
char **parse_check(char *buff)
{
	char **tok_args;
	
	/* don't forget to free tok_args! (In main) */
	if (buff == NULL)
	{
		printf("ERROR: cannot parse buff\n");
		globals->err_val = EXIT_FAILURE;
		return (NULL);
	}

	else
	{
		tok_args = malloc(sizeof(char *) * BUFFSIZE);
		if (tok_args == NULL)
		{
			printf("ERROR: malloc failed\n");
			globals->err_val = EXIT_FAILURE;
		}
	}
	return(tok_args);
}
