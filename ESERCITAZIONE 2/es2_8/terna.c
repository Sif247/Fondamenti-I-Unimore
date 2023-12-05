#include <stdbool.h>

bool is_terna_pitagorica(unsigned int a, unsigned int b, unsigned int c)
{
	unsigned int num1 = a * a;
	unsigned int num2 = b * b;
	unsigned int num3 = c * c;

	if ((num1 + num2) == num3)
	{
		return true;
	}
	else if ((num2 + num3) == num1)
	{
		return true;
	}
	else if ((num3 + num1) == num2)
	{
		return true;
	}
	else
		return false;
}