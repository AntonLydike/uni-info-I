#include <stdio.h>

int main(int argc, char *argv[])
{
	int anzahl;
	printf("\nAnzahl der Parameter: %i", argc - 1);
	printf("\nProgrammname: ");
	anzahl = printf("%s", argv[0]);
	printf("\nDer Programmname hat %i Zeichen.", anzahl);
	return 0;
}
