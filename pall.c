#include "monty.h"

/**
 * i_pall - prints all the ints in the stack
 *
 * @h: head
 *
 * @count: line count
 *
 * Return: 0
 */

void i_pall(stack_t **h, unsigned int count)
{
	stack_t *temp;

	(void) count;

	temp = *h;
	while (*h != NULL)
	{
		printf("%d\n", (*h)->n);
		temp = temp->next;
	}
}
