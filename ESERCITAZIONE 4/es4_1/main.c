#define _CRT_SECURE_NO_WARNINGS

#include <stdbool.h>
#include <stdlib.h>

extern bool scrivi_intero(const char* filename, int i);

int main()
{
	const char* nome = "prova.txt";
	int num = 45;

	bool risultato = scrivi_intero(nome, num);

	return 0;
}