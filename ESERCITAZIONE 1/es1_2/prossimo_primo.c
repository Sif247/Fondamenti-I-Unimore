

unsigned int prossimo_primo(unsigned int x)
{
	unsigned int ris = x + 1;
	unsigned int resto = 3;
	while (resto == 3)
	{

		for (int i = 2; i < ris; i++)
		{
			if ((ris % i) == 0)
			{
				resto = 1;
			}
		}
		if (resto == 1)
		{
			ris++;
			resto = 3;
		}
		else
			resto = 1;

	}
	return ris;

}
