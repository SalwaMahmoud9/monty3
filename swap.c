#include "monty.h"
/**
 * swap_func - swap_func
 * @head: head
 * @counter: line number
 * Return: void
*/
void swap_func(stack_Obj **head, unsigned int counter)
{
	stack_Obj *h;
	int length = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(go.file);
		free(go.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
