/**
 * _pow_recursion - x power y
 * @n: base
 * @y: the power
 * Return: the result
 */
int _pow_recursion(int x, int y)
{
	if (x < 0 || y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
