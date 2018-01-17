int matrix_create(int ***m, int ze, int sp)
{
	int i, k;

	*m = malloc(ze * sizeof(int*));
	if (!(*m))
		return 0;

	for (i = 0; i < ze; i++) {
		(*m)[i] = malloc(sp * sizeof(int));
		if (!(*m)[i]) {
			for (k = 0; k < i; ++k)
				free((*m)[k]);
			
			free(*m);
			return 0;
		}
	}

	return 1;
}
