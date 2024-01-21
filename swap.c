#include "monty.h"

/**
 * swap -  swaps the top two elements of the stack.
 * @h: A pointer to the head of the stack.
 * @count: Line number.
 * Return: Nothing.
 */


void swap(stack_t **h, unsigned int count)
{
	stack_t *temp = NULL;

	temp = (*h)->next;
	*h = temp;
	temp = temp->prev;
	temp->prev = *h;
	temp->next = (*h)->next;
	(*h)->next = temp;
	(*h)->prev = NULL;

	(void) count;
}
