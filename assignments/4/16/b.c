#include <stdio.h>

int my_isspace(int i)
{
	if (i == ' '
         || i == '\n'
         || i == '\t'
         || i == '\f'
         || i == '\v'
         || i == '\r'
        ) {
                return 1;
        }

	return 0;
}

int main(void)
{
        char c;

        scanf("%c", &c);

        printf("%i\n", my_isspace(c));

	return 0;
}
