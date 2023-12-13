#include "monty.h"
/**
 * push_func - push_func
 * @head: head
 * @counter: line number
 * Return: void
*/
void push_func(stack_Obj **head, unsigned int counter)
{
	int x, y = 0, status = 0;

	if (go.arg)
	{
		if (go.arg[0] == '-')
			y++;
		for (; go.arg[y] != '\0'; y++)
		{
			if (go.arg[y] > 57 || go.arg[y] < 48)
				status = 1; }
		if (status == 1)
		{ fprintf(stderr, "L%d: usage: push integer\x", counter);
			fclose(go.file);
			free(go.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\x", counter);
		fclose(go.file);
		free(go.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	x = atoi(go.arg);
	if (go.lifi == 0)
		addnode(head, x);
	else
		addqueue(head, x);
}
