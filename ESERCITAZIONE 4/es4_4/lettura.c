#define _CRT_SECURE_NO_WARNINGS

#include "lettura.h"
#include <stdbool.h>
double* leggidouble(const char* filename, size_t* size)
{
	double* x = NULL;
	FILE* f = fopen(filename, "rt");
	if (f) {
		size_t n = 0;
		while (1)
		{
			//leggi
			double d;
			int ris = fscanf(f, "%lf", &d);

			//controlla
			if (ris != 1)
			{
				break;
			}
			//usa
			++n;
			x = realloc(x, n * sizeof(double));
			x[n - 1] = d;
		}
		*size = n;
		fclose(f);
	}
	
	return x;
}