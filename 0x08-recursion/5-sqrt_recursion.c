/**
 * sqr - instead of the loop, a double parameters func
 * @n: the same
 * @i: check for answer
 * Return: the root
 */
int sqr(int n, int i)
{
	int sq = i * i;

	if (sq > n)
		return (-1);
	if (sq == n)
		return (i);
	return (sqr(n, i + 1));
}


/**
 * _sqrt_recursion - square root for n
 * @n: the num
 * Return: the root result
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqr(n, 1));
}
