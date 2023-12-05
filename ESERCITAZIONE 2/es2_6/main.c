extern double varianza(double* x, unsigned int n);

int main()
{
	unsigned int num = 4;
	double *vett = malloc(num * sizeof(double));

	varianza(vett, num);
	free(vett);
	return 0;
}