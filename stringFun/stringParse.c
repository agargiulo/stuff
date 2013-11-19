#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * Author: Anthony Gargiulo <anthony@agargiulo.com>
 *
 * This program is super simple, it takes strings from the command line
 * arguments, and combines them into a single string adding spaces where
 * needed. I was going to use this as a way to play around with various string
 * things in C
 */

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		printf("Usage: %s string to parse\n", argv[0]);
		return EXIT_FAILURE;
	}
	// Remove the first arg
	argc--;
	argv++;

	unsigned int argLength = 0;

	for (int i = 0; i < argc; i++)
	{
		argLength += strlen(argv[i]) + 1;
	}

	char str[argLength + 1];
	memset(str, 0, argLength + 1);
	
	for (int i = 0; i < argc; i++)
	{
		strncat(str, argv[i], strlen(argv[i]));
		strncat(str, " ", 1);
	}

	if (strlen(str) != argLength)
	{
		printf("Warning, the string you have is not the right length (%d, not %d)\n", strlen(str), argLength);
	}

	printf("String is %d chars long, and is: \n%s\n", strlen(str), str);
	
	//char *tok = strtok(
	return EXIT_SUCCESS;
}
