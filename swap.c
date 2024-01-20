#include "monty"

void swap(stack_t *n1, stack_t *n2)
{
	n1->prev->next=n2;
	n2->next->prev=n1;
	n1->next=n2->next;
	n2->prev=n1->prev;
	n1->prev=n2;
	n2->next=n1;
}


