extern char* trim(const char* s);

int main()
{
	char* string1 = " prima";
	char* string2 = "dopo ";
	char* string3 = " a b ";
	char* string4 = " ";

	trim(string1);
	trim(string2);
	trim(string3);
	trim(string4);

	return 0;
}