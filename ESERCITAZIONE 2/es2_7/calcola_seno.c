#include <math.h>

int fattoriale(int num)
{
	if (num < 2)
	{
		return 1;
	}

	int calcolo = 1;
	for (int i = 2; i <= num; ++i)
	{
		calcolo *= i;
	}
	return calcolo;
}

int numeratore(int n)
{
	
}

double denominatore(double d)
{
	double denom = (2 * d) + 1;
	double finale = fattoriale(denom);
	return finale;
}

double moltiplicatore(double m, double variabile)
{
	double moltip = (2 * m) + 1;
	double conclusione = pow(variabile, moltip);
	return conclusione;
}

double calcola_seno(double x)
{
	double somma = 0;
	double alta = 0;
	double tot = 0;
	for (int i = 0; i < 20; ++i)
	{
		alta = numeratore(i) / denominatore(i);
		tot = alta * moltiplicatore(i, x);
		somma += tot;
	}
	return somma;
}