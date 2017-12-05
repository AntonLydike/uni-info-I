#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char* colors[] = { "red", "blue", "yellow" };

char* rand_color()
{
        return colors[rand() % 3];
}

int main (void)
{
        time_t t;

        srand((unsigned) time(&t));

        printf("%s\n", rand_color());

        return 0;
}
