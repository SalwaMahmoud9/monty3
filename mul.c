#include "monty.h"
/**
 * mul_func - mul_func
 * @head: head
 * @counter: line number
 * Return: void
*/
void mul_func(stack_t **head, unsigned int counter)
{
	stack_t *head2;
	int length = 0, aux;

	head2 = *head;
	while (head2)
	{
		head2 = head2->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	head2 = *head;
	aux = head2->next->n * head2->n;
	head2->next->n = aux;
	*head = head2->next;
	free(head2);
}
