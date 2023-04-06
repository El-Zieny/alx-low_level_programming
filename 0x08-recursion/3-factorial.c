/**
 * factorial - returns the factorial of a given number
 * @b: the num to be factorialed
 * Return: the factorial result
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
