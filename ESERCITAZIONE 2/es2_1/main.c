#include <stdint.h> 
#include <stdio.h>

extern void raddoppia(uint32_t* x, size_t n);

int main(void)
{
	uint32_t x[] = { 3,8,6,7 };
	raddoppia(*x, 4);
	return 0;
}