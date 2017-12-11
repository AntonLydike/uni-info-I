#include  <stdio.h>

int flush_buff(void);

double read_probability(void);

/*
 * tries to read a probability between 0 and 1 (inclusive)
 * returns:
 *  number in [0 - 1]: if a valid character was entered
 *                 -1: if a invalid input was entered
 *                 -2: buffer error (EOF encountered)
 */
double read_probability(void)
{
        double read;

        int c = scanf("%lf", &read),
            d = getchar(),
            flush_successful;

        if (d != '\n' || c == 0) {
                /* more input - flush */
                flush_successful = flush_buff();
                return flush_successful ? -1 : -2;
        } else if (read < 0 || read > 1) {
                return -1;
        } else if (d == EOF) {
                /* buffer error */
                return -2;
        }

        return read;
}

int flush_buff(void)
{
        int c;
        while ((c = getchar()) != '\n' && c != EOF) {}
        return c != EOF;
}
