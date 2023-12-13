#include "monty.h"
/**
  *rotr_func- rotr_func
  *@head: head
  *@counter: line number
  *Return: void
 */
void rotr_func(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *obj1;

	obj1 = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (obj1->next)
	{
		obj1 = obj1->next;
	}
	obj1->next = *head;
	obj1->prev->next = NULL;
	obj1->prev = NULL;
	(*head)->prev = obj1;
	(*head) = obj1;
}
