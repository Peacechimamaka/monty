#include "monty.h"

stack_t* top;

void push(int n)
{
	stack_t* newNode;
	newNode = malloc(sizeof(newNode));

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	newNode->next = top;
	top = newNode;

}


void pall(void)
{
	stack_t* myPrint;
	myPrint = top;

	while (myPrint != NULL)
	{
		printf("%d\n", myPrint->n);
		myPrint = myPrint->next;
	}
}
