#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char input;

	printf("Please enter any character: ");

	scanf("%c", &input);

	printf("Abstand zu 'A': %d\n", abs('A' - input));

	return 0;
}
