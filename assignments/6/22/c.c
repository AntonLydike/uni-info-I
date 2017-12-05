#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* zweite funktion, um einrückungstiefe zu beschränken */
unsigned int charcount (char needle, char* haystack, int hlen)
{
        int i, r = 0;

        for (i = 0; i < hlen; i++) {
                if (haystack[i] == needle) r++;
        }

        return r;
}

unsigned int strcount(char* needle, char* haystack)
{
        int needle_len = strlen(needle),
            haystack_size = strlen(haystack),
            r = 0,
            i;

        for(i = 0; i < needle_len; i++) {
                r += charcount(needle[i], haystack, haystack_size);
        }

        return r;
}

int main (void)
{
        printf("%i\n", strcount("HALLO","LAGER"));

        return 0;
}
