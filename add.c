#include "monty"

int add(stack_t *n1, stack_t *n2)
{
	stack_t *newNode;
	newNode = malloc(sizeof(newNode));
	newNode->n = (n1->n) + (n2->n);
	newNode->prev = NULL;
	newNode->next = NULL;

	return (newNode->n);
}
