#include <stdint.h>


extern double media(double* x, unsigned int n);

int main()
{
	unsigned int num = 4;
	double* vett = malloc(num * sizeof(double));

	free(vett);
	return 0;
}