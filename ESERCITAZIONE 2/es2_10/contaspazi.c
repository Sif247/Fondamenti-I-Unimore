unsigned int conta_spazi(const char* s)
{
	unsigned int somma = 0;
	for (unsigned int i = 0; s[i] != 0; ++i)
	{
		if (s[i] == ' ')
		{
			somma++;
		}
	}
	return somma;
}