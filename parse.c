#include "monty.h"
/**
 *
 *
 *
 */
char **parse(char **buff)
{
	char *delim = "\n \t\r\f";
	char *token;
	char **tok_args;
	size_t i = 0;

	printf("parse: before parse_check\n");
	tok_args = parse_check(buff);
	printf("parse: after parse_check\n");
	if (globals->err_val == EXIT_FAILURE)
		return NULL;
	printf("parse: tok_args set\n");
	token = strtok(*buff, delim);
	printf("parse: before while loop\n");
	while (token != NULL)
	{
		printf("parse: in while loop\n");
		tok_args[i] = strdup(token);
		i++;
		token = strtok(NULL, delim);
	}
	printf("parse: after while loop\n");
	tok_args[i] = NULL;
	printf("parse: right above return\n");
	return (tok_args);
}
