#include <stdbool.h>

extern bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c);

int main()
{
	unsigned int n1, n2, n3;
	bool ris;

	n1 = 5;
	n2 = 4;
	n3 = 3;
	ris = is_terna_pitagorica(n1, n2, n3);

	n1 = 3;
	n2 = 4;
	n3 = 5;
	ris = is_terna_pitagorica(n1, n2, n3);

	n1 = 1;
	n2 = 2;
	n3 = 3;
	ris = is_terna_pitagorica(n1, n2, n3);

	return 0;
}