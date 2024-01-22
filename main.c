#include "monty.h"

/**
 *main - the function main for the stack
 *@ac: arguement count
 *@av:aguement vector
 *Return: 0
 */

int main(int ac, char *av[])
{
	instruction_t instruction_s[] = {
		{"pall", &i_pall},
		{"push", &i_push},
		{"pint", &i_pint},
		{"pop", &i_pop},
		{"swap", &i_swap},
		{"add", &i_add},
		{"nop", &i_nop},
		{NULL, NULL}
	};

	if (mon_exec(av[1], instruction_s) != EXIT_SUCCESS)
		return (EXIT_FAILURE);

	if (ac != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	return (0);
}
