#include "monty.h"

/**
 * add - add elemnts
 * @h: head
 * @count: line number
 * Return: Nothing
 */

void add(stack_t **h, unsigned int count)
{
	stack_t *temp = NULL;

	temp = (*h)->next;
	temp->n = temp->n + (*h)->n;
	temp->prev = NULL;
	free(*h);
	*h = temp;

	(void) count;
}
