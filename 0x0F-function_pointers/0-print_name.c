/**
 * print_name - prints a name
 * @name: the name
 * @f: pointer to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
