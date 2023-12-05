extern void encrypt(char* s, unsigned int n);

int main()
{
	char *ecco = "ribaltamento completo";
	unsigned int num = 22;

	encrypt(ecco, num);
	return 0;
}