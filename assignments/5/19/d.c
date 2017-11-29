#include <stdio.h>

int sumq(int n);

int main(void)
{
	int n;

        printf("Eine Zahl eingeben: ");

	while (1) {
		if (scanf("%i", &n) != 1 || getchar() != '\n') {
                        break;
                }

		printf("sumq(%d) = %d\n", n, sumq(n));

		printf("Neue Eingabe: ");
	}
	return 0;
}

int sumq(int n)
{
	int i, sum = 0;

	for (i = 1; i <= n; i++) {
                sum += i * i;
        }

	return sum;
}
