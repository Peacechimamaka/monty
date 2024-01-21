#include "monty.h"

/**
 *pop - removes ints from the stack
 *
 *@h: head
 *
 *@count: line count
 *
 * Return: 0
 */
void pop(stack_t **h, unsigned int count)
{
        stack_t *temp;

        if (*h == NULL)
        {
                fprintf(stderr, "L<%u>: can't pop an empty stack\n", count);
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

