#include <stdio.h>

int my_abs(int x)
{
	return (x > 0) ? x : -x;
}

int main(void) 
{
	int x, status;
	printf("Geben Sie eine ganze Zahl ein:\n");
	status = scanf("%i", &x);
	if (status != 1 || getchar() != '\n') {
		printf("Eingabe ungueltig\n");
		return 1;
	}
	printf("\nDie Absolutbetrag von %i ist %i ", x, my_abs(x));
	return 0;
}
