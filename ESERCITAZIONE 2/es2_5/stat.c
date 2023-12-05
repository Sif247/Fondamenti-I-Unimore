#include <stdint.h>


double media(double* x, unsigned int n)
{
	if (x == NULL)
	{
		return 0;
	}

	if (n == 0)
	{
		return 0;
	}
	double somma = 0;
	for (int i = 0; i < n; ++i)
	{
		somma = somma + x[i];
	}
	return somma / n;
}