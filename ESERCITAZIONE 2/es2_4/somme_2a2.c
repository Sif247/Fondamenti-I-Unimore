#include <stdint.h>

uint32_t* somme_2a2(uint32_t* vett, size_t size)
{
	if (vett == NULL)
	{
		return NULL;
	}

	if ((size % 2) != 0)
	{
		--size;
	}
	uint32_t* risultato = malloc((size / 2) * sizeof(uint32_t));
	size_t fisso = 0;
	for (size_t i = 0; i < size; i += 2)
	{
		risultato[fisso] = vett[i] + vett[i + 1];
		fisso++;
	}

	return risultato;
}