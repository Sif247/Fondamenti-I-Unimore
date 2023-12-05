#include <stdint.h>

double varianza(double* x, unsigned int n)
{
	if (x == NULL)
	{
		return 0;
	}
	if (n < 2)
	{
		return 0;
	}


	double somma = 0;
	for (int i = 0; i < n; ++i)
	{
		somma = somma + x[i];
	}
	double ris = somma / n;


	double tot = 0;
	for (int i = 0; i < n; ++i)
	{
		tot = tot + (x[i] - ris) * (x[i]-ris);
	}
	return tot / n;
}