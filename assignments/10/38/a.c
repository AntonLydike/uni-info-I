int split(char * w, char c, char **rest)
{
	int i = 0;

        if (rest == NULL) {
                return 0;
        }

	while (w[i] != c && w[i] != '\0') {
		++i;
        }

	if (w[i] == c) {
		w[i] = '\0';
		*rest = &w[i + 1];
                return 1;
	} else {
		return 0;
        }
}
