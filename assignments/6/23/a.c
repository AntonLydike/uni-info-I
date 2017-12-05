#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lotto()
{
        return (rand() % 49) + 1;
}

int main (void)
{
        time_t t;

        int random = 0,
            had_one = 0,
            had_49 = 0;

        srand((unsigned) time(&t));

        while (!had_one || !had_49) {
                random = lotto();

                if (random == 1) had_one = 1;

                if (random == 49) had_49 = 1;
        }

        printf("had 1 and 49, am done.\n");

        return 0;
}
