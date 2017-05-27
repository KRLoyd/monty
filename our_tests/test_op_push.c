#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "monty.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	stack_t **head = NULL;
	int check;

	check = make_struct();
	if (check > 0)
	{
		printf("test_op_push: couldn't malloc space for globals\n");
		exit(EXIT_FAILURE);
	}

	globals->push_val = 98;
	globals->err_val = EXIT_SUCCESS;

	head = NULL;
	op_push(head, 0);
	printf("0 n: %d\n", (*head)->n);
	op_push(head, 1);
	printf("1, n: %d\n", (*head)->n);

	op_push(head, 2);
	printf("2, n: %d\n", (*head)->n);

	op_push(head, 3);
	printf("3, n: %d\n", (*head)->n);

	op_push(head, 4);
	printf("4, n: %d\n", (*head)->n);

	op_push(head, 98);
	printf("98, n: %d\n", (*head)->n);

	op_push(head, 402);
	printf("402n: %d\n", (*head)->n);

	op_push(head, 1024);
	printf("1024, n: %d\n", (*head)->n);

        /* op_pall(head); */
	return (EXIT_SUCCESS);
}
