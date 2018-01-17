int **matrix_cpy_deep(int **m, int ze, int sp)
{
        int **n, i, k;

        n = malloc(ze * sizeof(int*));
        if (!n)
                return 0;

        for (i = 0; i < ze; i++) {
                n[i] = malloc(sp * sizeof(int));
                if (!n[i]) {
                        for (k = 0; k < i; k++)
                                free(n[k]);

                        free(n);
                        return NULL;
                }
                for (k = 0; k < sp; k++) {
                        n[i][k] = m[i][k];
                }
        }

        return n;
}
