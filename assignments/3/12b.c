#include <stdio.h>
//Funktioniert nich nicht
int main(int argc, char const *argv[]) {
  double i,j;
  if(scanf("%lF %lF", &i, &j))
  {
      printf("%s\n", "Valid Input\n");
  }
  else
  {
    printf("%s\n", "Invalid Input\n");
  }
  return 0;
}
