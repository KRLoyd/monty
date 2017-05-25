#include "monty.h"
/**
 * main - main function for Monty program
 * @argc: argument count
 * @argv: arguments passed
 * Return: integer
 */
int main(int argc, char *argv[]__attribute__((unused)))
{
	int check;
	FILE *my_file;
	char **tok_args = NULL;
	char **buff = NULL;
	void (*func)(stack_t **stack, unsigned int line_number);
	int fileline = 0;


	/* printf("Main: first comment, before make_struct\n"); */
	/* allocate memory for the global struct */
	check = make_struct();
	if (check > 0)
		exit(EXIT_FAILURE);
	/* printf("Main: before err_val set\n"); */
	/* initialize globals->err_val and globals->push_val */
	globals->err_val = EXIT_SUCCESS;
	globals->push_val = 0;
	/* printf("Main: err_val and push_val set\n"); */
	
	if (check_args(argc) > 0)
	{
		printf("Main: Inside check args if\n");
		exit(EXIT_FAILURE);
	}
	my_file = fopen(argv[1], "r");
	while (getline(buff, 0, my_file) != -1)
	{
		fileline += 1;
		tok_args = parse(buff);
		if (globals->err_val == EXIT_FAILURE)
			break;
		func = find_func(fileline, tok_args[0]);
		if (globals->err_val > 0)
			break;
/* 		func(tok_args[1], fileline); */
	}
	/*free buff, getline, stack, all the things */
	printf("Main: return is next\n");
	return (globals->err_val);
}
