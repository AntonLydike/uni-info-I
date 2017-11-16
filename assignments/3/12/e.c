#include <stdio.h>

int main(void) {
	int input1, anz;
	char input2;

	printf("Bitte geben Sie eine poisitive, ganze Zahl und einen kleinbuchstaben ein:");


	anz = scanf("%i", &input1);
	input2 = getchar();

	if ( /* Ungültig wenn: */
		anz == 0                                              /* Keine Zahl 1 gegeben wurde */
		|| input1 < 0                                         /* Die zahl zu klein ist */
		|| (input2 != '\n' && getchar() != '\n')              /* Mehr als ein buchstabe gegeben */
		|| (input2 != '\n' && (input2 < 97 || input2 > 122))  /* Der Buchstabe kein kleinbuchstabe ist */
	) {
		printf("Ungültige eingabe!\n");
	} else {
		printf("Die eingegebenen Zahl ist: %i\n", input1);

		/* wenn input2 \n ist */
		if (input2 == 10) {
			printf("Es wurde kein Buchstabe eingegeben.\n");
		} else {
			printf("Der eingegebene Buchstabe ist: %c\n", input2);
		}
	}

	return 0;
}
