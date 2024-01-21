#include "monty.h"

/**
 *main - the function main for the stack
 *@ac: arguement count
 *@av:aguement vector
 *Return: 0
 */

int main (int ac, char *av[])
{
	char *code, *input = NULL;
	FILE *mfile;
	stack_t *stack = NULL;
	size_t size = 0;
	size_t rd;
	unsigned int count = 0;

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit (EXIT_FAILURE);
	}

	mfile = fopen(av[1], "r");
	if (!mfile)
	{
		fprintf(stderr, "Error: Can't open file %s\n", av[1]);
		exit (EXIT_FAILURE);
	}

	while ((rd = getline(&input, &size, mfile)) != -1);

	{
		count++;
		code = strtok(input, " \n\t");
		if (code)
		{
			if (strcmp(code, "pint") == 0)
				i_pint(&stack, count);
			else if (strcmp(code, "push") == 0)
			{
				strtok(NULL, " \t\n");
				i_push(&stack, count);
			}
			else if (strcmp(code, "pall") == 0)
				i_pall(&stack, count);
			else if (strcmp(code, "pop") == 0)
				i_pop(&stack, count);
			else if (strcmp(code, "swap") == 0)
				i_swap(&stack, count);
			else if (strcmp(code, "add") == 0)
				i_add(&stack, count);
			else if (strcmp(code, "nop") == 0)
				i_nop(&stack, count);
			else
			{
				fprintf(stderr, "L%d: unknown instruction %s\n", count, code);
				free(input);
				fclose(mfile);
				exit(EXIT_FAILURE);
			}
		}
	}
	free(input);
	fclose(mfile);
	exit(EXIT_SUCCESS);
}
