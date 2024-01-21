#include "monty.h"

/**
 *i_pop - removes ints from the stack
 *
 *@h: head
 *
 *@num: line count
 *
 * Return: 0
 */

void i_pop(stack_t **h, unsigned int num)
{
if (*h == NULL)
{
fprintf(stderr, "L%u: can't pop an empty stack\n", num);
}

else

(*h) = (*h)->next;
}
