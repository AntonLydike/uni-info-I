#include <stdio.h>

int main(void) {
  char input1, input2;

  printf("Bitte geben Sie zwei zeichen ein:");

  if (scanf("%c%c", &input1, &input2) != 2 || getchar() != '\n') {
    printf("Ungültige eingabe!\n");
  } else {
    printf("Die eingegebenen Zeichen sind %c und %c\n", input1, input2);
  }

  return 0;
}
