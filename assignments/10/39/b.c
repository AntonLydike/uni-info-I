void matrix_add(int a[][MAX_COL], int b[][MAX_COL], int n, int m)
{
	int i, j;

	for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                        a[i][j] += b[i][j];
                }
        }
}
