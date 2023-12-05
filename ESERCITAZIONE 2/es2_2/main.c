#include <stdint.h>

extern void iota(uint32_t* x, size_t n);

int main()
{
	uint32_t vett[] = {5,7,6,8};
	size_t num = 5;
	iota(*vett, num);
	return 0;
}