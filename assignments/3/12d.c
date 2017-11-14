#include <stdio.h>

int main(int argc, char const *argv[]) {
  int i;
  if(scanf("%d", &i))
  {
    if(i<=10 && i>=-10)  {
      printf("%s\n", "Valid Input\n");
    }
    else
    {
      printf("%s\n", "Invalid Input\n");
    }
  }
  else
  {
    printf("%s\n", "Invalid Input\n");
  }
  return 0;
}
