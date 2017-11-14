#include <stdio.h>

int main(int argc, char const *argv[]) {
  char c, d;
  int i;
  c=getchar();
  d=getchar();
  i=getchar();
  if(&c!="" && &d!="" && i==10)
  {
    printf("%s\n", "Valid Input\n");
  }
  else
  {
    printf("%s\n", "Invalid Input\n");
  }
  return 0;
}
