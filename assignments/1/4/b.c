#include <stdio.h>
#include <math.h>
/* wird das wirklich benötigt? */

/* define PI -  only needed incase I misunderstood circumference*/
#define M_PI acos(-1.0)

double calc_circumference_square(double length, double width)
{
	return 2 * (length + width);

	/*
	   // circumference of smallest and largest possible circle:
	   double smaller, larger;

	   if (length < width) {
	        smaller = length;
	        larger = width;
	   } else {
	        smaller = width;
	        larger = length;
	   }

	   // smallest
	   return M_PI * smaller;

	   // larger
	   return M_PI * larger;
	 */
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
