#include <stdio.h>

int mod(int a, int b);

int main(void)
{
	int a, b;

        printf("Zwei Zahlen in der form <zahl> mod <zahl> eingeben:\n");

	while (1) {
		if (scanf("%i mod %i", &a, &b) != 2 || getchar() != '\n') {
                        break;
                }

		printf("= %d\n", mod(a, b));
	}
	return 0;
}

int mod(int a, int b)
{
	if (b <= 0) return -1;

	while (a + 1 > b) {
                a = a - b;
        }
	return a;
}
