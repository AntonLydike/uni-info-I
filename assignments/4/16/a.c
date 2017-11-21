#include <stdio.h>

int my_toupper(int i)
{
	if (i >= 'a' && i <= 'z') {
                i -= 32;
        }

	return i;
}

int main(void)
{
        char c;

        scanf("%c", &c);

        printf("%c zu %c\n", c, my_toupper(c));

	return 0;
}
