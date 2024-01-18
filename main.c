#include "monty.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char buffer[2];
	FILE *myFile;

	int num;

	myFile = fopen(argv[1], "r");


	while (fgets(buffer, 2, myFile) != NULL)
	{
		num = (atoi(buffer));
		if (num != 0)
			push(num);
		/*printf("%s", buffer);*/
	}

	pall();

	fclose(myFile);

	(void)argc;


	return (0);
}
