#include "main.h"

/**
* print_c - print a character
*
* @args: arguments to prints
*
* Return: character
*/

int print_c(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}

/**
* print_s - print a string
*
* @args: arguments to print
*
* Return: String
*/

int print_s(va_list args)
{
	char *s;
	int len, i;

	s = va_arg(args, char *);
	len = _strlen(s);

	if (s == NULL)
	{
		s = "(null)";
	}

	for (i = 0; i < len; i++)
	{
		_putchar (s[i]);
	}
	return (len);
}

/**
 * print_percentage -print a percentage
 *
 * Return: percentage
*/

int print_percentage(void)
{
	_putchar(37);
	return (1);
}
