#include <stdio.h>
#include <math.h>

int main (void)
{
  double bruch;

  printf("Bitte geben Sie einen Dezimalbruch ein:");

  scanf("%lf", &bruch);

  printf("%.0f\n", ceil(bruch));

  return 0;
}
