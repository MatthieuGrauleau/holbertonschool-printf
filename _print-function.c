#include "main.h"

/**
* print_c - print a character
*
* @args: arguments to prints
*/

void print_c(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);
	_putchar('\n');
}

void print_s(va_list args)
{
	char *s;
	int len, i;

	s = va_arg(args, int);
	len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}