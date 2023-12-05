

extern unsigned int prossimo_primo(unsigned int x);

int main(void)
{
	unsigned int ris, num;

	num = 47;
	ris = prossimo_primo(num);

	num = 5;
	ris = prossimo_primo(num);

	num = 9;
	ris = prossimo_primo(num);

	num = 18;
	ris = prossimo_primo(num);

	return 0;
}