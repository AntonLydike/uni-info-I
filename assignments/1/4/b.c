#include <stdio.h>
#include <math.h>
/* wird math.h wirklich benötigt? */

double calc_circumference_square(double length, double width)
{
	return 2 * (length + width);
}

int main(void)
{
	double length, width;

	scanf("%lf %lf", &length, &width);
	printf("Der Umfang eines Rechtecks mit Laenge %f und Breite %f ist %f\n",
	       length,
	       width,
	       calc_circumference_square(length, width));
	return 0;
}
