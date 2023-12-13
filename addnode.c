#include "monty.h"
/**
 * addnode - addnode
 * @head: head
 * @n: n
 * Return: void
*/
void addnode(stack_t **head, int n)
{

	stack_t *node;
	stack_t *a;

	a = *head;
	node = malloc(sizeof(stack_t));
	if (node == NULL)
	{ 
		printf("Error\n");
		exit(0); 
	}
	if (a)
	{
		a->prev = node;
	}
	node->n = n;
	node->next = *head;
	node->prev = NULL;
	*head = node;
}
