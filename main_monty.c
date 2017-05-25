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
/* char **tok_args; */
	/* FILE my_file; */
	/* int fileline = 0; */
	/* int err_val = 0; */
	/* char *buff = NULL; */
	/* int *func; */

	printf("Main: first comment, before make_struct\n");
	check = make_struct();
	if (check > 0)
		exit(EXIT_FAILURE);
	printf("Main: before err_val set\n");
	globals->err_val = 0;
	printf("Main: err_val set\n");
	
	if (check_args(argc) > 0)
	{
		printf("Main: Inside check args if\n");
		exit(EXIT_FAILURE);
	}
	/* my_file = fopen(argv[1], r); */
	/* while (getline(buff, 0, argv[1]) != -1) */
	/* { */
	/* 	tok_args = parse(buff); */
/* 		if (err_val > 0) */
/* 			break; */
/* /\*what is up with 'func'? How should we declare and use this? *\/ */
/* 		func = find_func(tok_args[0]); */
/* 		if (err_val > 0) */
/* 			break; */
/* 		func(tok_args[1], fileline); */
	/* } */
	/*free buff, getline, stack, all the things */
	printf("Main: return is next\n");
	return (0);
}
