#include "monty.h"

/**
 *i_pint - prints the first ints in the stack
 *
 *@h: head
 *
 *@num: line count
 *
 * Return: 0
 */

void i_pint(stack_t **h, unsigned int num)
{
if (*h == NULL)
{
fprintf(stderr, "L%u: can't pint, stack empty\n", num);
exit (EXIT_FAILURE);
}

else

printf("%u\n", (*h)->n);
}
