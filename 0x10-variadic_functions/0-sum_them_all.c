#include <stdarg.h>
/**
 * sum_them_all - sums all the arguments execluden the first one/counter
 * @n: the counter
 * Return: the result
 */
int sum_them_all(const unsigned int n, ...)
{
	if (!n)
		return (0);
	va_list ap;
	unsigned int i, res;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		res += va_arg(ap, int);
	va_end(ap);
	return(res);
}
