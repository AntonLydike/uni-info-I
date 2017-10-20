#include <stdio.h>

int ggT(int m, int n)
{
	int a = m;
	int b = n;
	while (b > 0) {
		int r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main(void)
{
	printf("%i\n", ggT(30, 42));
	return 0;
}
