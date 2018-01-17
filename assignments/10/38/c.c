int main (void) {
        long outlong = 0;
        char * str = malloc((MAX_INPUT_LENGTH + 1) * sizeof(char));
        char * outstr = NULL;

        char buff;
        int i = 0;

        while (i < MAX_INPUT_LENGTH && (buff = getchar()) != '\n') {
                if (buff == EOF) {
                        printf("EOF encountered.\n");
                        free(str);
                        return 1;
                }

                str[i++] = buff;

        }
        str[i] = '\0';

        outlong = strtol(str, &outstr, 16);

        printf("long: %ld\nstr:  %s\n", outlong, outstr);

        free(str);

        return 0;
}
