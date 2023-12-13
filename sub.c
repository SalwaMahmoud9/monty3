#include "monty.h"
/**
  *sub_func- sub_func
  *@head: head
  *@counter: line number
  *Return: void
 */
void sub_func(stack_Obj **head, unsigned int counter)
{
	stack_Obj *aux;
	int n, x;

	aux = *head;
	for (x = 0; aux != NULL; x++)
		aux = aux->next;
	if (x < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(go.file);
		free(go.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = *head;
	n = aux->next->n - aux->n;
	aux->next->n = n;
	*head = aux->next;
	free(aux);
}
