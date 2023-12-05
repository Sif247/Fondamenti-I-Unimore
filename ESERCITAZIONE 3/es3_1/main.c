#include <stdint.h>

extern char* concatena(const char* prima, const char* seconda);

int main()
{
	 char s1[] = "Questa e' la ";
    char s2[] = "stringa risultante.";
    char *s;
    s = concatena(s1, s2);
    free(s);
    return 0;
}