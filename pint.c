#include "monty.h"
/**
 * pint_func - pint_func
 * @head: head
 * @counter: line number
 * Return: void
*/
void pint_func(stack_Obj **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(go.file);
		free(go.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
