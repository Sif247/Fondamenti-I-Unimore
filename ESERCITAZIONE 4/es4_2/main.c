#include "lettura.h"

#include <stdint.h>

int main()
{
	size_t num;
	int* risultato;

	risultato = leggiinteri("dati1.bin", &num);
	free(risultato);

	risultato = leggiinteri("dati2.bin", &num);
	free(risultato);

	risultato = leggiinteri("dati3.bin", &num);
	free(risultato);

	risultato = leggiinteri("dati4.bin", &num);
	free(risultato);
	return 0;

}