#include "monty.h"

int main(int argc, char* argv[])
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


	/*push (1);
	push (2);
	push (3);
	
	pall()*/

	return (0);
}
