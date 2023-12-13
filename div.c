#include "monty.h"
/**
 * div_func - div_func
 * @head: head
 * @counter: counter
 * Return: void
*/
void div_func(stack_Obj **head, unsigned int counter)
{
	stack_Obj *headObj;
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
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(go.file);
		free(go.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	headObj = *head;
	if (headObj->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(go.file);
		free(go.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	a = headObj->next->n / headObj->n;
	headObj->next->n = a;
	*head = headObj->next;
	free(headObj);
}
