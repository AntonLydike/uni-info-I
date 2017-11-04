#include <stdio.h>

int comp (int dividend, int divisor)
{
  int quotient = 0;

  while (dividend + 1 > divisor) {
    dividend = dividend - divisor;
    quotient++;
  }

  return quotient;
}

int main (void)
{
  int x, y;
  printf("Bitte geben Sie zwei positive ganze Zahlen ein\n");
  printf("(getrennt durch ein Leerzeichen):\n");
  scanf("%i %i", &x, &y);

  printf("comp(%i, %i) = %i\n", x, y, comp(x, y));

  return 0;
}
