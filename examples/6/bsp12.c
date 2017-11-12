#include <stdio.h>

int read_pos(void);
void flush_buff(void);
void print_square(int n);

int main(void)
{
	int n = -1;
	printf("Ausgabe eines Quadrats\n");
	while (n <= 0) {
		printf("Positive ganze Zahl eingeben:\n");
		if ((n = read_pos()) <= 0)
			printf("Eingabe ungueltig\n");
	}
	print_square(n);
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

void print_square(int n)
{
	int i, j;
	for (i = 1; i <= n; ++i) {
		for (j = 1; j <= n; ++j)
			putchar('X');
		putchar('\n');
	}
}
