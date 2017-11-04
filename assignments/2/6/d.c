#include <stdio.h>
#include <math.h>

int main (void)
{
  int zaehler, nenner;
  double bruch;

  printf("Bitte geben Sie einen Dezimalbruch zwischen -1 und 1 in folgendem ");
  printf("format ein: <zaehler>/<nenner>: ");
  
  scanf("%i/%i", &zaehler, &nenner);

  bruch = (double) zaehler / nenner;

  printf("Arcus Sinus von %.2f ist %.4f\n", bruch, asin(bruch));

  return 0;
}
