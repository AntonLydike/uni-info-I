#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char rand_char()
{
        /* 122 - 33 + 1 = 90 */
        int num = (rand() % 90) + 33;

        if (num > '9' && num < 'A') {
                return rand_char();
        } else if (num > 'Z' && num < 'a') {
                return rand_char();
        } else {
                return num;
        }
}

int main (void)
{
        time_t t;

        srand((unsigned) time(&t));

        printf("%c\n", rand_char());

        return 0;
}
