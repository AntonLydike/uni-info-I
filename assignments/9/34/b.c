int main(int argc, char *argv[])
{
	int i;
	char *w = malloc((strlen(argv[0]) + 1) * sizeof(char));

	if (w == NULL) {
                /* nothing to free */
		return 1;
        }

	for (i = 1; i < argc; ++i) {
		char *neu = realloc(w, (strlen(w) + strlen(argv[i]) + 1) * sizeof(char));

                if (neu == NULL) {
                        /* w is still allocated */
                        free(w);
			return 1;
                }

		w = neu;
	}
	printf("%s\n", w);
        free(w);
        /* free w, it's no longer used, freeing w, frees neu automatically */
	return 0;
}
