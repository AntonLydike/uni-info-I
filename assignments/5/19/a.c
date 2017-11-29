#include <stdio.h>

void print_stars(int n);

int main(void) {
        print_stars(0);
        return 0;
}

void print_stars(int n) {
        for (; n > 0; n--) {
                printf("*\n");
        }
}
