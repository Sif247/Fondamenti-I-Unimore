#include <stdlib.h>
#include <stdint.h>

size_t conta_parole(const char* s)
{
	if (s == NULL)
		return NULL;

	size_t somma = 0;
	for (size_t i = 0; s[i] != 0; ++i)
	{
		if (s[i] == ' ' && s[i + 1] != ' ')
			somma++;
	}
	return somma;
}