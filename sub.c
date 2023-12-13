#include "monty.h"
/**
  *sub_func- sub_func
  *@head: head
  *@counter: line number
  *Return: void
 */
void sub_func(stack_t **head, unsigned int counter)
{
	stack_t *aux;
	int n, x;

	aux = *head;
	for (x = 0; aux != NULL; x++)
		aux = aux->next;
	if (x < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	n = aux->next->n - aux->n;
	aux->next->n = n;
	*head = aux->next;
	free(aux);
}
