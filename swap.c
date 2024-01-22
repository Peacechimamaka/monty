#include "monty.h"

/**
 * i_swap -  swaps the top two elements of the stack.
 * @h: A pointer to the head of the stack.
 * @count: Line number.
 * Return: Nothing.
 */


void i_swap(stack_t **h, unsigned int count)
{
	int tmp;
	int hold;

	if (!*h || !h || !(*h)->next)
	{
		fprintf(stderr, "L%u: cant swap, stack too short", count);
		exit(EXIT_FAILURE);
	}
	tmp = (*h)->n;
	hold = (*h)->next->n;
	(*h)->n = hold;
	(*h)->next->n = tmp;
}
