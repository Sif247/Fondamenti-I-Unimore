#include <stdlib.h>
#include <stdint.h>

extern size_t conta_parole(const char* s);

int main()
{
	const char* frase = "Questa e' una stringa lunga 45 caratteri. ";
	size_t ris = conta_parole(frase);

	return 0;
}