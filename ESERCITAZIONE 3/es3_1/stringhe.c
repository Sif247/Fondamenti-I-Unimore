#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

char* concatena(const char* prima, const char* seconda)
{
	if (prima == NULL )
	{
		prima = " ";
	}

	if (seconda == NULL)
	{
		seconda = " ";
	}

	size_t count1 = strlen(prima);
	size_t count2 = strlen(seconda);

	size_t count_tot = count1 + count2;
	char* concat = malloc(count_tot + 1);

	strcpy(concat, prima);
	strcat(concat, seconda);

	return concat;
	
}
