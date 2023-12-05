double pot(double num, int esponente)
{
	if (esponente == 0)
	{
		return 1;
	}

	double potenza = 0;
	for (int i = 0; i < esponente; ++i)
	{
		potenza += (num * num);
	}
	return potenza;
}

int fatt(int n)
{
	int fattoriale = 1;
	for (int i = 2; i <= n; ++i)
	{
		fattoriale *= i;
	}
	return fattoriale;
}

double exp(double x)
{
	double tot = 0;
	for (int i = 0; i < 50; ++i)
	{
		tot += pot(x, i) / fatt(i);
	}
	return tot;
}