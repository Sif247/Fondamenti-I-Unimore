#include <stdint.h> 
#include <stdio.h>

void raddoppia(uint32_t* x, size_t n)
{
	if (x == NULL)
	{
		return 0;
	}
	for (int i = 0; i < n; ++i)
	{
		x[i] = x[i] * 2;
	}
}