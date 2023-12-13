#include "monty.h"
/**
 * pchar_func - pchar_func
 * @head: head
 * @counter: line number
 * Return: void
*/
void pchar_func(stack_Obj **head, unsigned int counter)
{
	stack_Obj *head2;

	head2 = *head;
	if (!head2)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(go.file);
		free(go.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (head2->n > 127 || head2->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(go.file);
		free(go.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", head2->n);
}
