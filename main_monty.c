#include "monty.h"
/**
 * main - main function for Monty program
 * @argc: argument count
 * @argv: arguments passed
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int check;
	int exit_val;
	size_t len;
        stack_t *stack = NULL;
	FILE *my_file;
	char **tok_args = NULL;
	char *buff = NULL;
	void (*func)(stack_t **stack, unsigned int line_number);
	unsigned int fileline = 0;

	/* allocate memory for the global struct */
	check = make_struct();
	if (check > 0)
		exit(EXIT_FAILURE);
	/* initialize globals->err_val and globals->push_val */
	globals->err_val = EXIT_SUCCESS;
	globals->push_val = 0;
	
	if (check_args(argc) > 0)
	{
		exit(EXIT_FAILURE);
	}
	my_file = fopen(argv[1], "r");
	if (my_file == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		globals->err_val = EXIT_FAILURE;
		exit(EXIT_FAILURE);
	}
	while ((getline(&buff, &len, my_file) != -1) && 1)
	{
		fileline += 1;
		tok_args = parse(buff);
		if (globals->err_val == EXIT_FAILURE)
			break;
		func = find_func(fileline, tok_args);
		if (globals->err_val == EXIT_FAILURE)
		  break;
 		func(&stack, fileline);
		if (globals->err_val == EXIT_FAILURE)
		  break;
		free_pointers(tok_args);
	}
      	fclose(my_file);
      	free(buff);
	exit_val = globals->err_val;
      	free(globals);
	free_pointers(tok_args);
	free_stack(&stack);
	exit(exit_val);
}
