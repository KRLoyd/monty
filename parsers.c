#include "monty.h"
/**
 *
 *
 *
 */
char **parse(char *buff)
{
	char *delim = "\n \t\r\f";
	char *token;
	char **tok_args;
	size_t i = 0;


	tok_args = parse_check(buff);
	if (globals->err_val == EXIT_FAILURE)
		return NULL;
	token = strtok(buff, delim);
	while (token != NULL)
	{
		tok_args[i] = strdup(token);
		token = strtok(NULL, delim);
		i++;
	}
	tok_args[i] = NULL;
	/* printf("\tparse: tok_args[%lu]: %s\n", i, tok_args[i]); */
	return (tok_args);
}

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
