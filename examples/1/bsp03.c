#include <stdio.h>

int main(void)
{
	int i;
	printf("\nBitte geben Sie eine ganze Zahl ein: ");
	scanf("%i", &i); /* Wartet auf die Eingabe */
	printf("\nSie haben die Zahl %i eingegeben.", i);
	return 0;
}
