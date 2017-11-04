#include <stdio.h>
#include <ctype.h>

int main (void)
{
  char eingabe1, eingabe2;

  printf("Bitte geben Sie zwei Zeichen durch ein Leerzeichen separiert ein: ");
  scanf("%c %c", &eingabe1, &eingabe2);

  /* folgender code hätte das gleiche ergebnis, wäre aber unsauberer
   * printf("%i\n", isdigit(eingabe1) && isdigit(eingabe2));
   * hier wird der boolische rückgabewert zu einer ganzzahl umgewandelt.
   */

  if (isdigit(eingabe1) && isdigit(eingabe2)) {
    printf("1\n");
  } else {
    printf("0\n");
  }

  return 0;
}
