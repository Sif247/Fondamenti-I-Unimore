extern int cerca_primo(const char* s, char c);

int main()
{
	const char str[] = "supercalifragilistichespiralidoso";

	char lettera = 'e';
	int risultato = cerca_primo(str, lettera);

	lettera = 'b';
	risultato = cerca_primo(str, lettera);

	lettera = 't';
	risultato = cerca_primo(str, lettera);

	return 0;
}