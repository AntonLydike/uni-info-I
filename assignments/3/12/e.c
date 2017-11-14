#include <stdio.h>

int main(void) {
  int input1;
  char input2;

  printf("Bitte geben Sie eine poisitive, ganze Zahl und einen kleinbuchstaben ein:");

  if (
    scanf("%i", &input1) != 1
    || input1 < 0
    || ((input2 = getchar()) != '\n'
        && (input2 < 97
            || input2 > 122
        )
    )
  ) {
    printf("Ungültige eingabe!\n");
  } else {
    printf("Die eingegebenen Zahl ist: %i\n", input1);
    if (input2 == 10) {
      printf("Es wurde kein Buchstabe eingegeben.\n");
    } else {
      printf("Der eingegebene Buchstabe ist: %c\n", input2);
    }
  }

  return 0;
}
