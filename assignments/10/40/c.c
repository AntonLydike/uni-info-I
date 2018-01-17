int funktion(int folge[], int n, int k)
{
	int i = 1;
	int c = 0;

	while (i <= n){
		if (folge[i-1] <= k){
			c++;
		}
		i++;
	}

	return c;
}
