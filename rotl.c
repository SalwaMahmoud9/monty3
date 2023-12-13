#include "monty.h"
/**
  *rotl_func- rotl_func
  *@head: head
  *@counter: line number
  *Return: void
 */
void rotl_func(stack_Obj **head,  __attribute__((unused)) unsigned int counter)
{
	stack_Obj *obj1 = *head, *aux;

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
