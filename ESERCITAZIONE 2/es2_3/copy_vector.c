#include <stdint.h>

void copy_vector(uint32_t* dst, uint32_t* src, size_t n)
{
	for (size_t i = 0; i < n; ++i)
	{
		dst[i] = src[i];
	}
}