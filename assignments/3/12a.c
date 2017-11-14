#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i;
  if(scanf("%i", &i))
  {
    printf("%s\n", "Valid Input\n");
  }
  else
  {
    printf("%s\n", "Invalid Input\n");
  }
  return 0;
}
