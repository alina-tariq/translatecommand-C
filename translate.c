#include <stdio.h>
#include <stdlib.h>
#include "trfuncs.h"

int main(int argc, char *argv[])
{
	char c;

	if (!validArgs(argc, argv))
	{
		printf("BAD INPUT\n");
		exit(1);
	}
	
	c = getchar();
	while (c != EOF)
	{
		translate(argv, c);
		c = getchar();
	}

	exit(0);
}
