#include <stdio.h>

void print_triangle(int n);

int main(void)
{
	int n;

        printf("Eine Zahl eingeben: ");

	while (1) {
		if (scanf("%i", &n) != 1 || getchar() != '\n') {
                        break;
                }

		print_triangle(n);

		printf("Neue Eingabe: ");
	}
	return 0;
}

void print_triangle(int n)
{
	int j;

	for (; n > 0; n--) {
                for (j = 0; j < n; j++) {
			printf("0");
		}
		printf("\n");
        }
}
