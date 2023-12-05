int cerca_primo(const char* s, char c)
{
	int somma = 0;
	for (int i = 0; i < s[i] != 0; ++i)
	{
		if (s[i] == c)
		{
			return i;
		}
	}
	return -1;
}