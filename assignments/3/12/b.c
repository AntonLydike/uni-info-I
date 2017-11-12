#include <stdio.h>

int main(void) {
  double input1, input2;

  printf("Bitte geben Sie zwei nichtnegative Zahlen, getrennt durch ein Leerzeochen ein:");

  if (
    scanf("%lf %lf", &input1, &input2) != 2
    || getchar() != '\n'
    || input1 < 0
    || input2 < 0
  ) {
    printf("Ungültige eingabe!\n");
  } else {
    printf("Die eingegebenen Zahlen sind %.3f und %.3f\n", input1, input2);
  }

  return 0;
}
