#include <stdio.h>
int main(int argc, char const *argv[]) {
  int i;
  char c, d;
  scanf("%i%c%c", &i, &c, &d);
  if (i>0 && c>=97 && c<=122 && d=='\n')  {
    printf("Valid Input");
  }
  else if(c == '\n')
  {
    printf("Valid Input");
  }
  else
  {
    printf("Invalid Input");
  }
  return 0;
}
