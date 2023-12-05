#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool scrivi_intero(const char* filename, int i)
{

	FILE* f = fopen(filename, "w");
	
	if (f == NULL)
	{
		return false;
	}
	int r = fprintf(f, "%d", i);
	if (r == 0)
	{
		fclose(f);
		return false;
	}
	fclose(f);
	return true;
}