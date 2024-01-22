#include "monty.h"
/**
 *mon_exec - to execute the monty opcode
 *
 *@instruction_s: set of instructions to be executed
 *
 *@fn: the file name
 *
 *Return: 0
 */
int mon_exec(const char *fn, instruction_t instruction_s[])
{
	stack_t *head = NULL;
	FILE *fl;
	int i = 0;
	unsigned int num = 1;
	char alloc[1024];
	char *opcode;

	fl = fopen(fn, "r");
	if (fl == NULL)
	{
		fprintf(stderr, "Error: can't open file %s\n", fn);
		return (EXIT_FAILURE);
	}
	while (fgets(alloc, sizeof(alloc), fl) != NULL)
	{
		opcode = strtok(alloc, " \t\n\r;:");
		if (opcode == NULL || opcode[0] == '#')
		{
			num++;
			continue;
		}
		for (i = 0; instruction_s[i].opcode != NULL; i++)
		{
			if (strcmp(opcode, instruction_s[i].opcode) == 0)
			{
				instruction_s[i].f(&head, num);
				break;
			}
		}

		if (instruction_s[i].opcode == NULL)
		{
			fprintf(stderr, "L%u: unknown instruction %s\n", num, opcode);
			fclose(fl);
			return (EXIT_FAILURE);
		}
		num++;
		}
	fclose(fl);
	return (0);
}
