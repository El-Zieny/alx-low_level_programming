/**
 * _test - testing
 * @n: is prime
 * @i: tester
 * Return: result
 */
int _test(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return(_test(n, i - 1));
}
/**
 * is_prime_number - check the code
 * @n: testing it
 * @Return: 1 if prime, else 0
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	if (n < 2 || n % 2 == 0)
		return (0);
	return (_test(n, n / 2));
}
