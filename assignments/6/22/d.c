#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isprefix(char* source, char* prefix)
{
        int srclen = strlen(source),
            prefixlen = strlen(prefix),
            i;

        if (prefixlen > srclen) {
                return 0;
        }

        for(i = 0; i < prefixlen; i++) {
                if (source[i] != prefix[i]) return 0;
        }

        return 1;
}

int main (void)
{
        printf("%i\n", isprefix("hallo", "welt"));
        printf("%i\n", isprefix("hallo", "ha"));
        printf("%i\n", isprefix("hallo", "hallo welt"));
        printf("%i\n", isprefix("hallo", "nein"));
        return 0;
}
