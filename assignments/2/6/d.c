#include <stdio.h>
#include <math.h>

int main (void)
{
  double bruch;

  printf("Bitte geben Sie einen Dezimalbruch zwischen -1 und 1 ein: ");

  scanf("%lf", &bruch);

  printf("Arcus Sinus von %.2f ist %.4f\n", bruch, asin(bruch));

  return 0;
}
