#include <stdio.h>

int maximum(int x, int y)
{
	return (x > y) ? x : y;
}

int main(void)
{
	int x, y, status;
	printf("Geben Sie zwei ganze Zahlen ein:\n");
	status = scanf("%i %i", &x, &y);
	if (status != 2 || getchar() != '\n') {
		printf("Eingabe ungueltig\n");
		return 1;
	}
	printf("\nDie groessere Zahl ist %i ", maximum(x,y));
	return 0;
}
