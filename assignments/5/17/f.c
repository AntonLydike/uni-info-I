#include <stdio.h>

void print_uebersicht();
int choose_option();

int main()
{
	double rate_children = 5.00;
	double rate_adults = 9.50;
	double rate_students = 7.50;
	int status = 1;
	int option;

	while (status) {
		print_uebersicht();
		option = choose_option();
		switch (option) {
		case 'a':
			printf("Preiskategorie Kind: %.2f\n", rate_children);
			break;
		case 'b':
			printf("Preiskategorie Erwachsener: %.2f\n", rate_adults);
			break;
		case 'c':
			printf("Preiskategorie Student: %.2f\n", rate_students);
			break;
		case 'q':
			status = 0;
			printf("Auswahl beendet\n");
			break;
		case -1:
			printf("Zuviele Zeichen eingegeben\n");
			while (getchar() != '\n') { }
			break;
		case -2:
		default:
			printf("Unbekannte Kategorie\n");
		}
	}
	return 0;
}

void print_uebersicht()
{
	printf("<<<MENU>>>\n");
	printf("Bitte waehlen Sie eine Preiskategorie:\n");
	printf("a Kinder\n");
	printf("b Erwachsene\n");
	printf("c Studenten\n\n");
	printf("q Auswahl beenden\n");
}

/*
 * choose_option() liest ein zeichen ein.
 * Rückaben:
 *	'a': Option a
 *	'b': Option b
 *	'c': Option c
 *	'q': Option q
 *	 -1: Mehr als ein zeichen eingegeben
 * 	 -2: Zeichen ist nicht a, b, c oder q
 */
int choose_option()
{
	int option = getchar();
	if (getchar() != '\n') {
		return -1;
	}
	if (option != 'a'
	 && option != 'b'
	 && option != 'c'
	 && option != 'q') {
		return -2;
	}

	return option;
}
