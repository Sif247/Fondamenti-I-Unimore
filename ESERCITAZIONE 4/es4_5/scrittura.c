#define _CRT_SECURE_NO_WARNINGS
#include "scrittura.h"

int scrivimaiuscolo(const char* filename)
{
	FILE* f = fopen(filename, "r");
	if (f == NULL)
	{
		return NULL;
	}

	int count = 0;
	while (1)
	{
		//leggi
		char d;
		int ris = fscanf(f, "%c", &d);
		//controlla
		if (ris != 1)
		{
			break;
		}
		//usa
		d = toupper(d);
		fprintf(stdout, "%c", d);
	}
	fclose(f);
	return 1;
}