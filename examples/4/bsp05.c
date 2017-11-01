#include <stdio.h>

int my_isdigit(char c)
{
	if (c < 48 || c > 57) {
		return 0;
	}
	return 1;
}


int main(void) 
{
	char c;
	int status;
	printf("Geben Sie ein ASCII-Zeichen ein:\n");
	status = scanf("%c", &c);
	if (status != 1 || getchar() != '\n') {
		printf("Eingabe ungueltig\n");
		return 1;
	}
	if (my_isdigit(c) == 1)
		printf("\nDas Zeichen ist eine Ziffer");
	else
		printf("\nDas Zeichen ist keine Ziffer");
	return 0;
}
