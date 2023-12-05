#include <math.h>

extern double calcola_seno(double x);
int main(void)
{
	double num;
	double ris;

	num = 3.1416;
	ris = calcola_seno(num);

	num = 1.5708;
	ris = calcola_seno(num);

	num = 0.7854;
	ris = calcola_seno(num);

	num = 0.5236;
	ris = calcola_seno(num);

	num = 0.3927;
	ris = calcola_seno(num);

	num = 28.1500;
	ris = calcola_seno(num);

	return 0;
}