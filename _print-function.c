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