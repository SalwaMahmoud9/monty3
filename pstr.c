#include "monty.h"
/**
 * pstr_func - pstr_func
 * @head: head
 * @counter: line number
 * Return: void
*/
void pstr_func(stack_t **head, unsigned int counter)
{
	stack_t *head2;
	(void)counter;

	head2 = *head;
	while (head2)
	{
		if (head2->n > 127 || head2->n <= 0)
		{
			break;
		}
		printf("%c", head2->n);
		head2 = head2->next;
	}
	printf("\n");
}
