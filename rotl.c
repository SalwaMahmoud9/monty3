#include "monty.h"
/**
  *f_rotl- f_rotl
  *@head: head
  *@counter: line number
  *Return: void
 */
void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)
{
	stack_t *obj1 = *head, *aux;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	aux = (*head)->next;
	aux->prev = NULL;
	while (obj1->next != NULL)
	{
		obj1 = obj1->next;
	}
	obj1->next = *head;
	(*head)->next = NULL;
	(*head)->prev = obj1;
	(*head) = aux;
}
