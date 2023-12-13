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
 * struct stack_struct - struct stack_struct
 * @n: n
 * @prev: prev
 * @next: next
 * Description: Description
 */
typedef struct stack_struct
{
	int n;
	struct stack_struct *prev;
	struct stack_struct *next;
} stack_Obj;
/**
 * struct go_struct - struct
 * @arg: arg
 * @content: content
 * @file: file
 * @lifi: lifi
 * Description: Description
 */
typedef struct go_struct
{
	char *arg;
	char *content;
    FILE *file;
	int lifi;
}  go_Obj;
extern go_Obj go;
/**
 * struct inst_struct - struct inst_struct
 * @opcode: opcode
 * @f: f
 * Description: Description
 */
typedef struct inst_struct
{
	char *opcode;
	void (*f)(stack_Obj **stack, unsigned int line_number);
} inst_Obj;

char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);

void push_func(stack_Obj **head, unsigned int number);
void pall_func(stack_Obj **head, unsigned int number);
void pint_func(stack_Obj **head, unsigned int number);

int execute(char *content, stack_Obj **head, unsigned int counter, FILE *file);
void free_stack(stack_Obj *head);

void pop_func(stack_Obj **head, unsigned int counter);
void swap_func(stack_Obj **head, unsigned int counter);
void add_func(stack_Obj **head, unsigned int counter);
void nop_func(stack_Obj **head, unsigned int counter);
void sub_func(stack_Obj **head, unsigned int counter);
void div_func(stack_Obj **head, unsigned int counter);
void mul_func(stack_Obj **head, unsigned int counter);
void mod_func(stack_Obj **head, unsigned int counter);
void pchar_func(stack_Obj **head, unsigned int counter);
void pstr_func(stack_Obj **head, unsigned int counter);
void rotl_func(stack_Obj **head, unsigned int counter);
void rotr_func(stack_Obj **head, __attribute__((unused)) unsigned int counter);

void addnode(stack_Obj **head, int n);
void addqueue(stack_Obj **head, int n);
void queue_func(stack_Obj **head, unsigned int counter);
void stack_func(stack_Obj **head, unsigned int counter);

#endif
