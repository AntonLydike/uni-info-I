void matrix_init_mult(int *m, int n)
{
        int i, j;

        for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                        n[i*n + j] = i * j;
                }
        }
}
