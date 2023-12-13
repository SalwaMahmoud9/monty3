#include "monty.h"
/**
 * pall_func - pall_func
 * @head: head
 * @counter: line number
 * Return: void
*/
void pall_func(stack_t **head, unsigned int counter)
{
	stack_t *head2;
	(void)counter;

	head2 = *head;
	if (head2 == NULL)
		return;
	while (head2)
	{
		printf("%d\n", head2->n);
		head2 = head2->next;
	}
}
