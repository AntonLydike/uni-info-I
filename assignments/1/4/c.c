#include <stdio.h>

int main(void)
{
	char input;

	printf("Please enter any character: ");
	scanf("%c", &input);
	printf("Previous character: %c\n",
	       input - 1);

	return 0;
}
