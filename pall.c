#include "monty.h"

/**
 *i_pall - prints all the ints in the stack
 *
 *@h: head
 *
 *@num: line count
 *
 * Return: 0
 */

void i_pall(stack_t **h, unsigned int num)
{
	(void) num;
	while (*h)
	{
		printf("%d\n", (*h)->n);
		*h = (*h)->next;
	}
	
	if (*h == NULL)
		return;
}
