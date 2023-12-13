#include "monty.h"
/**
 * add_func - add_func
 * @head: head
 * @counter: counter
 * Return: void
*/
void add_func(stack_Obj **head, unsigned int counter)
{
	stack_Obj *headObj;
	int length = 0
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
		fclose(go.file);
		free(go.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	headObj = *head;
	a = headObj->n + headObj->next->n;
	headObj->next->n = a;
	*head = headObj->next;
	free(headObj);
}
