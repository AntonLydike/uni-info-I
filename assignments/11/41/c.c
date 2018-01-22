#include <stdio.h>

int max (int * list, int len)
{
        int elm1 = list[len-1],
            elm2;

        if (len == 1) return elm1;

        if (elm1 > (elm2 = max(list, len-1))) {
                return elm1;
        }

        return elm2;
}
