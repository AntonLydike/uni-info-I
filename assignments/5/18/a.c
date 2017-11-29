#include <stdio.h>
#include <ctype.h>

int read_alpha();

int main(void) {

        int c = read_alpha();

        if (c == -1) {
                return 1;
        }

        printf("Eingegebenes Zeichen: %c\n", c);

        return 0;
}

int read_alpha () {
        char c;
        if (scanf("%c", &c) != 1
         || getchar() != '\n'
         || !islower(c)
        ) {
		printf("Ungültige eingabe!\n");
                return -1;
	}

        return c;
}
