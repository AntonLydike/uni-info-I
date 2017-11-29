#include <stdio.h>
#include <ctype.h>

double read_probability();

int main(void) {

        double c = read_probability();

        if (c == -1) {
                return 1;
        }

        printf("Eingegebene Wahrscheinlichkeit: %.2f%%\n", c * 100);

        return 0;
}

double read_probability () {
        double p;
        if (scanf("%lf", &p) != 1
         || getchar() != '\n'
         || p < 0
         || p > 1
        ) {
		printf("Ungültige eingabe!\n");
                return -1;
	}

        return p;
}
