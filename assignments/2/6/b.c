#include <stdio.h>
#include <ctype.h>

int main (void)
{
  char eingabe;
  printf("Bitte geben Sie ein Zeichen ein: ");
  scanf("%c", &eingabe);

  /* das if statement eigentlich unnötig, da tolower nur uppercase buchstaben
   * verändert. Demnach hätte
   * printf("%c", tolower(eingabe))
   * das gleiche ergebnis.
   */

  if (isupper(eingabe)) {
    printf("%c\n", tolower(eingabe));
  } else {
    printf("%c\n", eingabe);
  }

  return 0;
}
