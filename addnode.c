#include "monty.h"
/**
 * addnode - addnode
 * @head: head
 * @n: n
 * Return: void
*/
void addnode(stack_Obj **head, int n)
{

	stack_Obj *node;
	stack_Obj *a;

	a = *head;
	node = malloc(sizeof(stack_Obj));
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
