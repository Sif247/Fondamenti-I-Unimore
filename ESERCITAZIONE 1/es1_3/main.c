extern unsigned int somma_cifre(unsigned int x);

int main(void)
{
	unsigned int ris;
	unsigned int num;

	num = 245;
	ris = somma_cifre(num);

	num = 584;
	ris = somma_cifre(num);

	num = 888;
	ris = somma_cifre(num);

	num = 54781;
	ris = somma_cifre(num);

	return 0;
}