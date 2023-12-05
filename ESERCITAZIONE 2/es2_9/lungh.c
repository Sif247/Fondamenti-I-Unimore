#include <stdint.h>

size_t lungh(const char* str)
{
	size_t somma = 0;
	for (size_t i = 0; str[i] != 0; ++i)
	{
		if (str[i] == 0)
		{
			return somma;
		}
		else
			somma++;
	}
	return somma;
}