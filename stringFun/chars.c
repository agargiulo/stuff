#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		fprintf(stderr, "Usge: %s chars\n", argv[0]);
		return(EXIT_FAILURE);
	}


	for (int j = 1; j < argc; j++)
	{
		for (unsigned int i = 0; i < strlen(argv[j]); i++)
		{
			char ch = argv[j][i];
			printf("%%c: %c\t%%x: %x\t%%d: %d\n", ch, ch, ch);
		}
	}

	exit(EXIT_SUCCESS);
}
