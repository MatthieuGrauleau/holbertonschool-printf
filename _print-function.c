#include "main.h"

/**
* print_c - print a character
*
* @args: arguments to prints
*/

void print_c(va_list args)
{
	char s;

	s = va_arg(args, char);
	_putchar(s);
}
