#include <stdio.h>

void vsum(int w[], int v[], int n);

int main(void)
{
	int n, size = 10, w[10], v[10];

        for (n = 0; n < size; n++) {
                w[n] = n * n;
		v[n] = 15 - n;
        }

	vsum(w, v, size);

	return 0;
}

void vsum(int w[], int v[], int n)
{
	n--;
	
        for (; n >= 0; n--) {
		printf("%d: %d + %d = %d\n",n, v[n], w[n], v[n] + w[n]);
		v[n] += w[n];
	}

	/* Und das Ergebnis interessiert *drumroll* ... NIEMANDEN! */
}
