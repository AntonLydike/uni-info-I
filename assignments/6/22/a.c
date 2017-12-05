#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *my_strcat(char* dest, char* src)
{
        int src_len = strlen(src),
            dest_len = strlen(dest),
            i;

        for(i = 0; i < src_len; i++) {
                dest[dest_len + i] = src[i];
        }

        dest[dest_len + src_len] = '\0';

        return dest;
}

int main (void)
{
        char *dest = malloc(12 * sizeof(char));

        my_strcat(dest, "hello ");
        my_strcat(dest, "world");

        printf("%s\n", dest);

        return 0;
}
