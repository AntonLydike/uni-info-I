#include <stdio.h>

void print_array(int w[], int size, int n);

int main(void)
{
	int n, size = 10, w[10];

        for (n = 0; n < size; n++) {
                w[n] = n * n;
        }

        printf("Eine Zahl eingeben: ");

	while (1) {
		if (scanf("%i", &n) != 1 || getchar() != '\n') {
                        break;
                }

		print_array(w, size, n);

		printf("Neue Eingabe: ");
	}
	return 0;
}

void print_array(int w[], int size, int n)
{
        if (n > size) n = size;
        
	for (n = size - n; n < size; n++) {
                printf("%i\n", w[n]);
        }
}
