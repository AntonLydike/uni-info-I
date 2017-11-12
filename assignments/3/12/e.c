#include <stdio.h>
#include <ctype.h>

int main(void) {
  int input1;
  char input2;

  printf("Bitte geben Sie eine poisitive, ganze Zahl und einen kleinbuchstaben ein:");

  if (
    scanf("%i%c", &input1, &input2) != 2
    || getchar() != '\n'
    || input1 < 0
    || !islower(input2)
  ) {
    printf("Ungültige eingabe!\n");
  } else {
    printf("Die eingegebenen Zahl ist: %i\nDer eingegebene Buchstabe ist: %c\n", input1, input2);
  }

  return 0;
}
