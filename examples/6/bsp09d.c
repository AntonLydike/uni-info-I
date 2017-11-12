#include <stdio.h>

int read_pos(void);
void flush_buff(void);
void print_ascii(int a, int b);

int main(void)
{
	int a;
	printf("Ausgabe ASCII-Zeichen zwischen zwei Grenzen\n");
	while (1) {
		printf("Nicht-negative ganze Zahl eingeben:\n");
		if ((a = read_pos()) == -1) {
			printf("Eingabe ungueltig\n");
			continue;
		}
		break;
	}
	print_ascii(0, a);
	return 0;
}

int read_pos(void)
{
	int zahl;
	if (scanf("%i", &zahl) != 1 || zahl < 0 || getchar() != '\n' ) {
		flush_buff();
		return -1;
	}
	return zahl;
}

void flush_buff(void)
{
	while (getchar() != '\n') {}
}

void print_ascii(int a, int b)
{
	int i;
	if (a <= b) {
		for (i = a; i <= b; ++i)
			printf("%i: %c\n", i, i);
	} else {
		for (i = a; i >= b; --i)
			printf("%i: %c\n", i, i);
	}
}
