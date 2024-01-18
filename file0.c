#include "monty.h"

/**
 * push - to add element
 * @n: an integer
 * Return: void
 */

stack_t *top;


void push(int n)
{
	stack_t *newNode;

	newNode = malloc(sizeof(newNode));

	newNode->prev = NULL;
	newNode->n = n;
	newNode->next = NULL;

	newNode->next = top;
	top = newNode;

}

/**
 * pall - print all
 *
 * Return: void
 */


void pall(void)
{
	stack_t *myPrint;

	myPrint = top;

	while (myPrint != NULL)
	{
		printf("%d\n", myPrint->n);

		myPrint = myPrint->next;
	}
}
