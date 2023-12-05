#include "complessi.h"

int main()
{
	struct complesso num1 = { 4,8 };
	struct complesso num2 = { 2,7 };

	prodotto_complesso(&num1, &num2);

	return 0;
}