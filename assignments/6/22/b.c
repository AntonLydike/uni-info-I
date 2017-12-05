#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_strncpy(char* dest, char* src, int size)
{
        int i,
            srclen = strlen(src);

        for(i = 0; i < size; i++) {
                if (i < srclen) {
                        dest[i] = src[i];
                } else {
                        dest[i] = '\0';
                }
        }

        return dest;
}

int main (void)
{
        char *dest = malloc(12 * sizeof(char));

        my_strncpy(dest, "hello world", 12);

        printf("%s\n", dest);

        my_strncpy(dest, "hello dude", 12);

        printf("%s\n", dest);

        return 0;
}
