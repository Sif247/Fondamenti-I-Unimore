extern unsigned int conta_spazi(const char* s);

int main()
{
	const char str[] = "Prova stringa in cui contare gli spazi";
	unsigned int num_spazi = conta_spazi(str);
	return 0;
}