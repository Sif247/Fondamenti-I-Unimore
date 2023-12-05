#include <stdlib.h>
#include <string.h>

char* trim(const char* s)
{
	if (s == NULL)
	{
		return NULL;
	}

	int n = strlen(s);

	int imp = 0;
	while (s[imp] != 0)
	{
		if (s[imp] == ' ')
		{
			n--;
			imp++;
		}
		else
		{
			break;
		}
	}

	int a = n;
	while (1)
	{
		if (s[a] == ' ')
		{
			n--;
			a--;
		}
		else
		{
			break;
		}
	}

	char* ris = malloc(sizeof(char) * n);

	int b = 0;
	for (int i = imp; i <= n; i++)
	{
		ris[b] = s[i];
		b++;
		if (i == n)
		{
			ris[b] = 0;
		}
	}
	return ris;
}