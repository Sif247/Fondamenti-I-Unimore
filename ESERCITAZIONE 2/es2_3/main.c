#include <stdint.h>

extern void copy_vector(uint32_t* dst, uint32_t* src, size_t n);

int main()
{
	uint32_t* destination;
	uint32_t source[] = { 3, 8, 8, 7};
	size_t dimension = 4;

	copy_vector(*destination, *source, dimension);
	return 0;
}