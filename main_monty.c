#include "monty.h"
/**
 * main - main function for Monty program
 * @argc: argument count
 * @argv: arguments passed
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int check, exit_val;
	size_t len;
	stack_t *stack = NULL;
	FILE *my_file;
	char **tok_args = NULL;
	char *buff = NULL;
	void (*func)(stack_t **stack, unsigned int line_number);
	unsigned int fileline = 0;

	check = make_struct();
	if (check > 0)
		exit(EXIT_FAILURE);
	globals->err_val = EXIT_SUCCESS;
	globals->push_val = 0;
	if (check_args(argc) > 0)
		exit(EXIT_FAILURE);
	my_file = fopen(argv[1], "r");
	if (my_file == NULL)
	{
		printf("Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((getline(&buff, &len, my_file) != -1) && 1)
	{
		fileline += 1;
		if (strcmp(buff, "\n") == 0)
			continue;
		tok_args = parse(buff);
		if (globals->err_val == EXIT_FAILURE)
			break;
		func = find_func(fileline, tok_args);
		free_pointers(tok_args);
		if (globals->err_val == EXIT_FAILURE)
			break;
		func(&stack, fileline);
		if (globals->err_val == EXIT_FAILURE)
			break;
	}
	fclose(my_file); exit_val = globals->err_val;
	free_everything(buff, &stack); exit(exit_val);
}
