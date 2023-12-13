#include "monty.h"
/**
 * pop_func - pop_func
 * @head: head
 * @counter: line number
 * Return: void
*/
void pop_func(stack_t **head, unsigned int counter)
{
	stack_t *head2;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head2 = *head;
	*head = head2->next;
	free(head2);
}
