#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "trfuncs.h"

int validArgs(int argc, char *argv[])
{
	if (argc != 3)
	{
		return 0;
	}
	else if (strlen(argv[1]) != strlen(argv[2]))
	{
		return 0;
	}
	else
	{
		for (int i = 0; i < strlen(argv[1]); i++)
		{
			if (!isalnum(argv[1][i]) || !isalnum(argv[2][i]))
			{
				return 0;
			}
		}
	}

	return 1;
}

void translate(char *argv[], char c)
{
	char out = c;

	for (int i = 0; i < strlen(argv[1]); i++)
	{
		if (c == argv[1][i])
		{
			out = argv[2][i];
		}
	}

	printf("%c", out);
}
