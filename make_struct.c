#include "monty.h"

/**
 * make_struct - mallocs space for global_s struct
 * 
 * Return: 0 (SUCCESS), 1 (FAILURE)
 */

int make_struct()
{
	globals = malloc(sizeof(struct global_s));
	if (globals == NULL)
	{
		printf("Error: malloc failed");
		return (1);
	}
	return (0);
} 
