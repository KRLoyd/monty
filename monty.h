#ifndef MONTY_H
#define MONTY_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#define BUFFSIZE 200

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcoode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global_s - holds global values for the following:
 * @err_val: If an error is found, this value is set to 1
 * @push_val: If a push op code is found, it's associated int is stored here
 *
 */
typedef struct global_s
{
        int err_val;
	int push_val;
	/* char s_or_q; */
} global_t;

extern global_t *globals;
global_t *globals;

int check_args(int argc);

void convert_push_arg(char *tok_args, int fileline);
int make_struct();
char **parse(char *buff);
char **parse_check(char *buff);
/* int strcmp(const char *s1, const char s2); */
char *strdup(const char *s);
char *strtok(char *str, const char *delim);


void push_val(int push_val, unsigned int line_number);




int _isdigit(int c);
void check_push_val(int push_val, unsigned int line_number);

void (*find_func(unsigned int fileline, char **tok_args))(stack_t ** stack, unsigned int line_number);
void free_everything(char *buff, stack_t **stack);
void free_pointers(char **ptr);
void free_stack(stack_t **stack);
void (*func(void))(stack_t **stack, unsigned int line_number);
void op_push(stack_t **stack, unsigned int line_number);
void op_pall(stack_t **stack, unsigned int fileline);
void op_pop(stack_t **stack, unsigned int fileline);
void op_pint(stack_t **stack, unsigned int fileline);
void op_add(stack_t **stack, unsigned int fileline);
void op_div(stack_t **stack, unsigned int fileline);
void op_mod(stack_t **stack, unsigned int fileline);
void op_nop(stack_t **stack, unsigned int fileline);
void op_swap(stack_t **stack, unsigned int fileline);
void op_mul(stack_t **stack, unsigned int fileline);
void op_sub(stack_t **stack, unsigned int fileline);

unsigned int stack_len(stack_t *stack);

#endif/* MONTY_H */
