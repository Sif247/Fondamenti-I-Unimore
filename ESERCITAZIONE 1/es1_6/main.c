extern int soluzioni(double a, double b, double c, double* x1, double* x2);

int main(void)
{
	double n1, n2, n3;
	double* ris1, * ris2;
	double tot;

	n1 = 4;
	n2 = 18;
	n3 = 2;
	ris1 = 8;
	ris2 = 7;
	tot = soluzioni(n1, n2, n3, ris1, ris2);


	return 0;
}