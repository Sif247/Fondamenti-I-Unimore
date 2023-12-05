#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void stampa_cornicetta(const char* s)
{

	int count = strlen(s);
	printf("/-");
	for (int i = 0; i < count; ++i)
	{
		printf("-");
	}
	printf("-\\");
	printf("\n");
	printf("| ");
	for (int i = 0; i < count; ++i)
	{
		printf("%c",s[i]);
	}
	printf(" |\n");
	printf("\\-");
	for (int i = 0; i < count; ++i)
	{
		printf("-");
	}
	printf("-/\n");


	return 0;
}