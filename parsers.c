#include "monty.h"
/**
 * parse - creates an array of strings from a string
 * @buff: string to break into tokens
 *
 * Return: array of tokens (SUCCESS), NULL (FAILURE)
 */
char **parse(char *buff)
{
	char *delim = "\n \t\r\f";
	char *token;
	char **tok_args;
	size_t i = 0;

	tok_args = parse_check(buff);
	if (globals->err_val == EXIT_FAILURE)
		return (NULL);
	token = strtok(buff, delim);
	while (token != NULL)
	{
		tok_args[i] = strdup(token);
		token = strtok(NULL, delim);
		i++;
	}
	tok_args[i] = NULL;
	return (tok_args);
}

/**
 * parse_check - makes sure buff is not NULL and mallocs space for tok_args
 * @buff: string to check
 *
 * Return: double pointer to tok_args (SUCCESS), NULL (FAILURE)
 */
char **parse_check(char *buff)
{
	char **tok_args;

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
	return (tok_args);
}
