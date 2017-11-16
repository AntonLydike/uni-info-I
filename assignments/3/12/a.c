#include <stdio.h>

int main(void) {
	int input;

	printf("Bitte geben Sie eine ganze Zahl ein: ");

	if (scanf("%i", &input) != 1 || getchar() != '\n') {
		printf("Ungültige eingabe!\n");
	} else {
		printf("Die eingegebene Zahl ist: %i\n", input);
	}

	return 0;
}
