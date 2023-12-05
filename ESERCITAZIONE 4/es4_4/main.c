#include "lettura.h"

int main()
{
	size_t* n;
	double* ris;
	
	ris = leggidouble("dati1.txt", &n);
	free(ris);

	ris = leggidouble("dati2.txt", &n);
	free(ris);

	ris = leggidouble("dati3.txt", &n);
	free(ris);

	return 0;
}