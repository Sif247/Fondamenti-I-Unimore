#include "lettura.h"

int main()
{
	int* ris;
	size_t misura;

	ris = leggiinteri2("dati1.bin", &misura);
	free(ris);

	ris = leggiinteri2("dati2.bin", &misura);
	free(ris);

	ris = leggiinteri2("dati3.bin", &misura);
	free(ris);

	return 0;

}