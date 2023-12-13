#include "monty.h"
/**
* execute - execute
* @stack: stack
* @counter: counter
* @file: file
* @content: content
* Return: int
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t ot[] = {
				{"push", push_func}, {"pall", pall_func}, {"pint", pint_func},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	unsigned int x = 0;
	char *o;

	o = strtok(content, " \n\t");
	if (o && o[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
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
