#include <stdio.h>

void print_uebersicht();

int main()
{
	double rate_children = 5.00;
	double rate_adults = 9.50;
	double rate_students = 7.50;
	int status = 1;
	int option;

	do {
		print_uebersicht();
		option = getchar();
		if (getchar() != '\n') {
			printf("Zuviele Zeichen eingegeben\n");
			while (getchar() != '\n') { }
			continue;
		}
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
		default:
			printf("Unbekannte Kategorie\n");
		}
	} while (status);
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
