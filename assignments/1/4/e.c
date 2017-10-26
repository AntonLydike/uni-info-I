#include <stdio.h>
#include <math.h>

double milliseconds_to_hours(double ms)
{
	return ms / 1000 / 60 / 60;
}

int main(void)
{
	int ms;

	printf("Please enter a duration in milliseconds: ");
	scanf("%d", &ms);
	printf("%d milliseconds ammount to %.2f hours.\n",
	       ms,
	       milliseconds_to_hours(ms));

	return 0;
}
