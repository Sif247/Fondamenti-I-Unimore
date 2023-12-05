extern int divisione(double a, double b, double* q);

int main()
{
	double n1, n2, *n3;
	int ris;

	n1 = 8;
	n2 = 0;
	n3 = 12;
	ris = divisione(n1, n2, &n3);

	n1 = 4;
	n2 = 23;
	n3 = 15;
	ris = divisione(n1, n2, &n3);

	n1 = 1;
	n2 = 0;
	n3 = 5;
	ris = divisione(n1, n2, &n3);

	n1 = 4;
	n2 = 6;
	n3 = 4;
	ris = divisione(n1, n2, &n3);


	return 0;
}