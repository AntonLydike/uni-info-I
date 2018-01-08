int * read_pos()
{
	int *px;

	px = malloc(sizeof(int));
	if (px == NULL) {
		return NULL;
	}

	if (scanf("%i", px) != 1) {
		free(px);
		return NULL;
	}

	return px;
}
