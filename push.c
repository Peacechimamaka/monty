#include "monty.h"

/**
 *i_push - pushes an integer to the stack
 *
 * @h: a pointer to the first element of the stack
 *
 *@count: a counter to the line number
 *
 *Return: nothing
 */
void i_push(stack_t **h, unsigned int count)
{
	int num;
	char *outcome;

	if (!h || !count)
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		exit (EXIT_FAILURE);
	}

	outcome =strtok(NULL, " \n\t");
	
	if (!outcome || !isdigit(*outcome))
	{
		fprintf(stderr, "L%d: usage: push integer\n", count);
		exit(EXIT_FAILURE);
	}

	num = atoi(outcome);
	if (*h != NULL)

	{
		stack_t *n_node = malloc(sizeof(stack_t));
		if (n_node == NULL)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}

		n_node->prev = NULL;
		n_node->n = num;
		n_node->next = *h;

		(*h)->prev = n_node;
		*h = n_node;
	}
	else
	{
		*h = malloc(sizeof(stack_t));
		
		if (!*h)
		{
			fprintf(stderr, "Error: malloc failed\n");
			exit(EXIT_FAILURE);
		}

		(*h)->prev = NULL;
		(*h)->n = num;
		(*h)->next = NULL;

	}
}
