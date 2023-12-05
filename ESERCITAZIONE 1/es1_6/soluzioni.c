double sqrt(double num)
{
	for (int i = num; i > 0; --i)
	{
		double calcolo = num / i;
		if ((calcolo * calcolo) == num)
		{
			return calcolo;
		}
	}
}

double quadrato(double n)
{
	return n * n;
}

double discriminante(double a, double b, double c)
{
	double pow, molt;

	pow = quadrato(b);
	molt = 4 * a * c;

	return pow - molt;
}

int soluzioni(double a, double b, double c, double* x1, double* x2)
{
	double disc = discriminante(a, b, c);
	if (disc == 0)
	{
		return 1;
	}
	else if (disc < 0)
	{
		return 0;
	}
	else if (disc > 0)
	{

		*x1 = (-b + sqrt(disc)) / 2 * a;
		*x2 = (-b - sqrt(disc)) / 2 * a;
		return 2;
	}
}