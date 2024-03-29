#include "monty.h"

/**
 *i_pop - removes ints from the stack
 *
 *@h: head
 *
 *@count: line count
 *
 * Return: 0
 */
void i_pop(stack_t **h, unsigned int count)
{
	stack_t *temp;

	if (*h == NULL || h == NULL)
	{
		fprintf(stderr, "L<%u>: can't pop an empty stack\n", count);
		free(h);
		exit(EXIT_FAILURE);
	}
	else
	{
		temp = *h;
		*h = (*h)->next;
		(*h)->prev = NULL;
		free(temp);
	}
}

