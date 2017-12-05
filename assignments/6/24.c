#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_INPUT_LENGTH 10

int read_int(char input[]) {
        int inlen = 0;
        char read = getchar();

        if (read == '\n') return 0;

        if (!isdigit(read)) {
                while (getchar() != '\n') {};
                return 0;
        }

        if ((read == '0' && getchar() == '\n')) {
                input[0] = read;
                return 1;
        } else if (read == '0'){
                return 0;
        }

        input[0] = read;
        inlen++;

        while(inlen <= MAX_INPUT_LENGTH) {
                read = getchar();
                if (read == '\n') {
                        return 1;
                } else if (isdigit(read)) {
                        input[inlen] = read;
                        inlen++;
                } else {
                        while (getchar() != '\n') {};
                        return 0;
                }
        }

        while (getchar() != '\n') {};

        return 0;
}

int main (void)
{
        char result[MAX_INPUT_LENGTH + 1] = { 0 };

        if (read_int(result)) {
                printf("%s\n", result);
        } else {
                printf("readerror!\n");
        }

        return 0;
}
