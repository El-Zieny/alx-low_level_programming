/**
 * _calloc - check the code
 * @nmemb: yes
 * @size: yes
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i, x;
	char *hh;

	i = 0;
	x = 1;
	hh = malloc(22);
	if (!hh)
		return ('\0');
	if (i > x)
		return (hh);
	(void) nmemb;
	(void) size;
	return ('\0');
}
