#include <monty.h>

/**
 *
 *
 *
 */

int main (int ac char *av[])
{
	char *output, *code, *input = NULL;
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
		fprint(stderr, "Error: Can't open file %s\n", av[1]);
		exit (EXIT_FAILURE);
	}
