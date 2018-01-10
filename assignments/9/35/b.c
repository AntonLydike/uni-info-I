#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main (int argc, char *argv[])
{
        char * str;
        int n, * random, l = 0;
        time_t t;

        if (argc != 2) {
                printf("WHY WOULD YOU BE THIS CRUEL?!\n");
                return 1;
        }

        n = 0;
        str = argv[1];

        if (*str == '-') {
                printf("It's a retard!\n");
                return 3;
        }

        while (*str != '\0') {
                if (*str >= '0' && *str <= '9') {
                        if (n != 0) {
                                n *= 10;
                        }

                        n += *str - '0';
                } else {
                        printf("Hey! Do you know what a fucking number is?!\n");
                        return 2;
                }

                str++;
        }

        printf("requested %d random numbers.\n", n);

        if (n == 0) return 0;

        random = calloc(n, sizeof(int));

        if (random == NULL) {
                printf("Well, I guess you should by memory. Yes, I know it's stupidly expensive atm.");
                return 1;
        }

        srand((unsigned) time(&t));

        /* initialize array backwards, then print forward */

        l = n;
        for (; n > 0; n--) {
                random[n - 1] = rand();
        }

        for (; n < l; n++) {
                printf("%d\n", random[n]);
        }

        free(random);
        return 0;

}
