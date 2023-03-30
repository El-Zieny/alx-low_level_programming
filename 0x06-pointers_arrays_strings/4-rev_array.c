/**
 * reverse_array - check the code
 * @a: the array
 * n: its length
 */
void reverse_array(int *a, int n)
{
	int m, tmp, i;

	m = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		tmp = a[m];
		a[m] = a[i];
		a[i] = tmp;
		m--;
	}
}
