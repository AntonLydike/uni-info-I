#include <stdio.h>

int main(void) {
	int input;

	printf("Bitte geben Sie eine Zahl zwischen (einschließlich) -10 und 10 ein:");

	if (
		scanf("%i", &input) != 1
		|| getchar() != '\n'
		|| input < -10
		|| input > 10
	) {
		printf("Ungültige eingabe!\n");
	} else {
		printf("Die eingegebenen Zahl ist: %i\n", input);
	}

	return 0;
}
