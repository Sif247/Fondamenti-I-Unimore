unsigned int somma_cifre(unsigned int x)
{
	unsigned int somma = 0;
	unsigned int resto = 0;

	resto = x % 10;
	do
	{
		somma += resto;
		if (resto = 0)
		{
			return somma;
		}
		else 
		{
			x = x / 10;
			resto = x % 10;
		}
	} while (x != 0);

	return somma;
}