#include <string.h>
#include <stdio.h>
int max(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}

int main()
{
	char a[500], b[500];
	int c[500], d[500], e[501];
	int i, j, m, n, k, r, p, q;
	for (q = 0; q <= 499; q++)
	{
		c[q] = 0;
		d[q] = 0;
		e[q] = 0;
	}
	gets(a);
	gets(b);
	i = strlen(a);
	j = strlen(b);
	for (m = 0; m <= i - 1; m++)
		c[m] = a[i - 1 - m] - '0';
	for (n = 0; n <= j - 1; n++)
		d[n] = b[j - 1 - n] - '0';
	for (k = 0; k <= max(i, j) + 1; k++)
	{
		e[k] = (e[k] + c[k] + d[k]) % 10;
		r = ((c[k] + d[k]) - (c[k] + d[k]) % 10) / 10;
		e[k + 1] = e[k + 1] + r;
	}
	int s = max(i, j);
	if (e[s] == 0)
		for (p = 0; p <= s - 1; p++)
			printf("%d", e[s - p - 1]);
	else
		for (p = 0; p <= s; p++)
			printf("%d", e[s - p]);
	return 0;
}
