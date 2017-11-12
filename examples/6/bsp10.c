#include <stdio.h>

int read_pos(void);
void flush_buff(void);
int div(int a, int b);

int main(void)
{
	int a = -1, b = -1;
	printf("Berechnung ganzzahlige Division\n");
	while (a <= 0) {
		printf("Erste positive ganze Zahl eingeben:\n");
		if ((a = read_pos()) <= 0)
			printf("Eingabe ungueltig\n");
	}
	while (b <= 0) {
		printf("Zweite positive ganze Zahl eingeben:\n");
		if ((b = read_pos()) <= 0)
			printf("Eingabe ungueltig\n");
	}
	printf("%i div %i = %i", a, b, div(a, b));
	return 0;
}

int read_pos(void)
{
	int zahl;
	if (scanf("%i", &zahl) != 1 || zahl < 0 || getchar() != '\n') {
		flush_buff();
		return -1;
	}
	return zahl;
}

void flush_buff(void)
{
	while (getchar() != '\n') {}
}

int div(int a, int b)
{
	int e = 0;
	while (b <= a) {
		a = a - b;
		++e;
	}
	return e;
}
