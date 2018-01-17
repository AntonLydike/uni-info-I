int main()
{
	int **A, **B;

	A = matrix_create(5, 5);

        if (!A)
		return 1;

        A = matrix_init(A, 5, 5);
	B = matrix_create(5, 5);

        if (!A) {
		matrix_destroy(A, 5);
		return 1;
	}

	matrix_init(B, 5, 5);
	matrix_print(A, 5, 5);
	matrix_print(B, 5, 5);
	matrix_destroy(A, 5);
	matrix_destroy(B, 5);
        
	return 0;
}
