#include <stdio.h>
#include <math.h>

int main(int argc, char * argv[])
{
	double result = sqrt((double)(argc - 1) * 2);

	printf("Quadratwurzel der verdoppelten Anzahl der Parameter:%.2f\n", result);

	return 0;
}
