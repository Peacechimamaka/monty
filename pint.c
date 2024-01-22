#include "monty.h"

/**
 *i_pint - prints the first ints in the stack
 *
 *@h: head
 *
 *@count: line count
 *
 * Return: Nothing
 */
void i_pint(stack_t **h, unsigned int count)
{
	if (*h == NULL)
	{
		fprintf(stderr, "L<%u>: can't pint, stack empty", count);
		exit(EXIT_FAILURE);
	}
	else
	{
		stack_t *temp;

		temp = *h;
		printf("%d\n", temp->n);
	}
}


