#define _CRT_SECURE_NO_WARNINGS

#include "lettura.h"
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

int* leggiinteri2(const char* filename, size_t* size)
{
	FILE* f = fopen(filename, "rb");
	if (f == NULL)
	{
		return NULL;
	}
	size_t n = 0;

	while (true)
	{
		//leggi
		int i;
		size_t elementi_letti;

		elementi_letti = fread(&i, sizeof i, 1, f);
		//controlla
		if (elementi_letti != 1)
		{
			break;
		}
		//usa
		++n;
	}
	rewind(f);

	int* x = malloc( n * sizeof(int));
	fread(x, sizeof(int), n, f);

	*size = n;
	fclose(f);
	return x;
}