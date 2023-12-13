#include "monty.h"
/**
 * f_add - f_add
 * @head: head
 * @counter: counter
 * Return: void
*/
void f_add(stack_t **head, unsigned int counter)
{
	stack_t *headObj;
	int length = 0;
	int a;

	headObj = *head;
	while (headObj)
	{
		headObj = headObj->next;
		length++;
	}
	if (length <= 1)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	headObj = *head;
	a = headObj->n + headObj->next->n;
	headObj->next->n = a;
	*head = headObj->next;
	free(headObj);
}
