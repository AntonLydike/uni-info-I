#include  <stdio.h>

int flush_buff(void);

int read_latin_lowercase(void);

/*
 * tries to read a sinngle lowercase latin character
 * returns:
 *   'a' - 'z': if a valid character was entered
 *          -1: if a invalid  character entered
 *          -2: buffer error (EOF encountered)
 */
int read_latin_lowercase(void)
{
        int c = getchar(),
            d,
            flush_successful;

        if (c == '\n') {
                /* if no character was supplied */
                return -1;
        } else if (c == EOF) {
                /* buffer error in first char */
                return -2;
        } else if ((d = getchar()) == '\n' && 'a' <= c && c <= 'z') {
                /* valid input */
                return c;
        } if (d == EOF) {
                /* buffer error in second char */
                return -2;
        } else {
                flush_successful = flush_buff();
                return flush_successful ? -1 : -2;
        }
}

int flush_buff(void)
{
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        return c != EOF;
}
