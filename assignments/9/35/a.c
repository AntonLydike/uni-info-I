#include <stdio.h>
#include <ctype.h>

int read_alpha(char *in)
{
	char buff;

	scanf("%c", &buff);

	if (buff >= 'a' && buff <= 'z') {
		*in = buff;
		return 1;
	}

	return 0;
}

int main()
{
	char c;
	int success;

	success = read_alpha(&c);

	if (success == 0) {
		printf("Invalid character.\n");
                return 1;
	}

	printf("Read: %c\n", c);
	return 0;
}
