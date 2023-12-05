#define _CRT_SECURE_NO_WARNINGS

#include "lettura.h"

#include <stdint.h>
#include <stdio.h>

int* leggiinteri(const char* filename, size_t* size)
{
	FILE* f = fopen(filename, "rb");
	if (f == NULL)
	{
		return NULL;
	}

	uint32_t n;
	size_t elementi_letti;
	elementi_letti = fread(&n, sizeof n, 1, f);

	if (elementi_letti != 1)
	{
		fclose(f);
		return NULL;
	}

	int* x = malloc(n * sizeof(int));
	if (x == NULL)
	{
		fclose(f);
		return NULL;
	}

	elementi_letti = fread(x, sizeof(int), n, f);

	if (elementi_letti != n)
	{
		free(x);
		fclose(f);
		return NULL;
	}


	fclose(f);
	*size = n;
	return x;
}