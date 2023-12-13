#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - struct stack_s
 * @n: n
 * @prev: prev
 * @next: next
 * Description: Description
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - struct
 * @arg: arg
 * @content: content
 * @file: file
 * @lifi: lifi
 * Description: Description
 */
typedef struct bus_s
{
	char *arg;
	char *content;
    FILE *file;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - struct instruction_s
 * @opcode: opcode
 * @f: f
 * Description: Description
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);

void push_func(stack_t **head, unsigned int number);
void pall_func(stack_t **head, unsigned int number);
void pint_func(stack_t **head, unsigned int number);

int execute(char *content, stack_t **head, unsigned int counter, FILE *file);
void free_stack(stack_t *head);

void pop_func(stack_t **head, unsigned int counter);
void swap_func(stack_t **head, unsigned int counter);
void add_func(stack_t **head, unsigned int counter);
void nop_func(stack_t **head, unsigned int counter);
void sub_func(stack_t **head, unsigned int counter);
void div_func(stack_t **head, unsigned int counter);
void mul_func(stack_t **head, unsigned int counter);
void mod_func(stack_t **head, unsigned int counter);
void pchar_func(stack_t **head, unsigned int counter);
void pstr_func(stack_t **head, unsigned int counter);
void rotl_func(stack_t **head, unsigned int counter);
void rotr_func(stack_t **head, __attribute__((unused)) unsigned int counter);

void addnode(stack_t **head, int n);
void addqueue(stack_t **head, int n);
void queue_func(stack_t **head, unsigned int counter);
void stack_func(stack_t **head, unsigned int counter);

#endif
