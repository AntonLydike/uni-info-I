#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main (int argcount, char *args[])
{
        int i;
        char * str = calloc(1, sizeof(char));

        for (i = 1; i < argcount; i++) {
                str = realloc(str, strlen(str) + strlen(args[i]) + 2);

                if (str == NULL) {
                        printf("I came here to concat strings and reserve memory. And I am all out of memory!");
                        return 1;
                }

                if (i != 1) {
                        strcat(str, " ");
                }

                str = strcat(str, args[i]);
        }

        printf("%s\n", str);

        free(str);

        return 0;
}
