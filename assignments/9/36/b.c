#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main (int argcount, char *args[])
{
        int c = 0;
        char *newhaystack = args[1];

        if (argcount != 3) {
                printf("Dude. Two arguments. Is it that hard?!\n");
                return 1;
        }

        while ((newhaystack = strstr(newhaystack, args[2])) != NULL) {
                c++;
                newhaystack++;
        }

        printf("%d\n", c);

        return 0;
}
