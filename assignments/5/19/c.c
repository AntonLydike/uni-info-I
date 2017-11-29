#include <stdio.h>

void print_sq(int n);

int main(void)
{
	int n;

        printf("Eine Zahl eingeben: ");

	while (1) {
		if (scanf("%i", &n) != 1 || getchar() != '\n') {
                        break;
                }

		print_sq(n);

		printf("Neue Eingabe: ");
	}
	return 0;
}

void print_sq(int n)
{
	int i;

	for (i = 1; i * i <= n; i++) {
                printf("%d\n", i * i);
        }
}
