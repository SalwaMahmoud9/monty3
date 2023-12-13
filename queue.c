#include "monty.h"
/**
 * queue_func - queue_func
 * @head: head
 * @counter: line number
 * Return: void
*/
void queue_func(stack_Obj **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	go.lifi = 1;
}

/**
 * addqueue - addqueue
 * @n: int
 * @head: head
 * Return: void
*/
void addqueue(stack_Obj **head, int n)
{
	stack_Obj *node, *aux;

	aux = *head;
	node = malloc(sizeof(stack_Obj));
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
