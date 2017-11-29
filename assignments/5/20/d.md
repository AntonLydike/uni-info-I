````c
int function (int a[], int s, int n) {
        int c = 0;
        int i = 0;

        while (i <= n) {
                if (a[i] > s) {
                        return c;
                } else if (a[i] == s) {
                        c++;
                }

                i++;

        }

        return c;
}
````

 - Ausgabe: `2`

 - Anzahl der vorkommenen `s` in einem sortierten Array.
