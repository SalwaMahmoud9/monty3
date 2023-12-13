#include "monty.h"
/**
 * mod_func - mod_func
 * @head: head
 * @head: head
 * Return: void
*/
void mod_func(stack_Obj **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
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
	a = headObj->next->n % headObj->n;
	headObj->next->n = a;
	*head = headObj->next;
	free(headObj);
}
