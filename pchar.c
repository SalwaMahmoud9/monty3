#include "monty.h"
/**
 * f_pchar - f_pchar
 * @head: head
 * @counter: line number
 * Return: void
*/
void f_pchar(stack_t **head, unsigned int counter)
{
	stack_t *head2;

	head2 = *head;
	if (!head2)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (head2->n > 127 || head2->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", head2->n);
}
