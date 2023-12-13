#include "monty.h"
/**
 * f_queue - f_queue
 * @head: head
 * @counter: line number
 * Return: void
*/
void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - addqueue
 * @n: int
 * @head: head
 * Return: void
*/
void addqueue(stack_t **head, int n)
{
	stack_t *node, *aux;

	aux = *head;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{
		printf("Error\n");
	}
	node->n = n;
	node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*head = node;
		node->prev = NULL;
	}
	else
	{
		aux->next = node;
		node->prev = aux;
	}
}
