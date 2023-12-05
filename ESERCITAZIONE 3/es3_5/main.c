#include <stdlib.h>

extern char* converti(unsigned int n);

int main()
{
	unsigned int num = 4355;
	char* risultato = converti(num);

	free(risultato);

	return 0;
}