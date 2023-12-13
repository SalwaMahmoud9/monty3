#include "monty.h"
/**
 * pop_func - pop_func
 * @head: head
 * @counter: line number
 * Return: void
*/
void pop_func(stack_Obj **head, unsigned int counter)
{
	stack_Obj *head2;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(go.file);
		free(go.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head2 = *head;
	*head = head2->next;
	free(head2);
}
