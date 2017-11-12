#include <stdio.h>

int read_pos(void);
void flush_buff(void);
double fakultaet(int n);

int main(void)
{
	int n = -1;
	printf("Berechnung der Fakultät\n");
	while (n == -1) {
		printf("Nicht-negative ganze Zahl eingeben:\n");
		if ((n = read_pos()) == -1)
			printf("Eingabe ungueltig\n");
	}
	printf("Die Fakultät %i! von %i ist %.0lf", n, n, fakultaet(n));
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

double fakultaet(int n)
{
	int i;
	double e = 1.0;
	for (i = 1; i <= n; ++i)
		e = e * i;
	return e;
}
