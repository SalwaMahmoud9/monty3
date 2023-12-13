#include "monty.h"
/**
* execute - execute
* @stack: stack
* @counter: counter
* @file: file
* @content: content
* Return: int
*/
int execute(char *content, stack_Obj **stack, unsigned int counter, FILE *file)
{
	inst_Obj ot[] = {
				{"push", push_func}, {"pall", pall_func}, {"pint", pint_func},
				{"pop", pop_func},
				{"swap", swap_func},
				{"add", add_func},
				{"nop", nop_func},
				{"sub", sub_func},
				{"div", div_func},
				{"mul", mul_func},
				{"mod", mod_func},
				{"pchar", pchar_func},
				{"pstr", pstr_func},
				{"rotl", rotl_func},
				{"rotr", rotr_func},
				{"queue", queue_func},
				{"stack", stack_func},
				{NULL, NULL}
				};
	unsigned int x = 0;
	char *o;

	o = strtok(content, " \n\t");
	if (o && o[0] == '#')
		return (0);
	go.arg = strtok(NULL, " \n\t");
	while (ot[x].opcode && o)
	{
		if (strcmp(o, ot[x].opcode) == 0)
		{	ot[x].f(stack, counter);
			return (0);
		}
		x++;
	}
	if (o && ot[x].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, o);
		fclose(file);
		free(content);
		free_stack(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
