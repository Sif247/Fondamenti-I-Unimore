extern double discriminante(double a, double b, double c);

int main(void)
{
	double ris;
	double n1, n2, n3;

	n1 = 5;
	n2 = 14;
	n3 = 9;
	ris = discriminante(n1, n2, n3);

	n1 = 2;
	n2 = 9;
	n3 = 2;
	ris = discriminante(n1, n2, n3);

	n1 = 8;
	n2 = 9;
	n3 = 7;
	ris = discriminante(n1, n2, n3);

	n1 = 4;
	n2 = 9;
	n3 = 7;
	ris = discriminante(n1, n2, n3);

	n1 = 5;
	n2 = 9;
	n3 = 3;
	ris = discriminante(n1, n2, n3);

	return 0;
}