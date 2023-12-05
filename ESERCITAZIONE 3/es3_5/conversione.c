#include <stdlib.h>

char* converti(unsigned int n)
{
	if (n == 0 || n == NULL)
	{
		return NULL;
	}

	unsigned int size = 0;
	unsigned int copia = n;
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	char* ris = malloc(size * sizeof(char) + 1);
	ris[size] = 0;

	for (int i = size; i > 0; i--) {
		ris[size - i] = copia % 10 + '0';
		copia /= 10;
	}
	return ris;

}