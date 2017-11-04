#include <stdio.h>
#include <math.h>

int main (void)
{
  int zaehler, nenner;
  double bruch;

  printf("Bitte geben Sie einen Dezimalbruch in folgendem format ein:");
  printf("<zaehler>/<nenner>: ");

  scanf("%i/%i", &zaehler, &nenner);

  bruch = (double) zaehler / nenner;

  printf("%.0f\n", ceil(bruch));

  return 0;
}
