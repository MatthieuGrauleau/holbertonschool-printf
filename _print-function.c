#include "main.h"

/**
* print_c - print a character
*
* @args: arguments to prints
*
* Return: 1 that equal to the lenght of the character
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
* Return: the lenght of the string
*/

int print_s(va_list args)
{
	char *s;
	int len, i;

	s = va_arg(args, char *);

	if (s == NULL)
	{
		s = "(null)";
	}
	len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		_putchar (s[i]);
	}
	return (len);
}

/**
 * print_percentage - print a percentage
 *
 * Return: 1 that's equal to the lenght of the percentage
*/

int print_percentage(void)
{
	_putchar(37);
	return (1);
}


/**
 * d_recur - prints integer
 * @a: integer to print
 *
*/

void d_recur(int a)
{
	unsigned int b;

	b = a;
	if (b / 10)
	{
		d_recur(b / 10);
	}
	_putchar(b % 10 + '0');
}

/**
 * print_d - function that prints a decimal
 *
 * @args: arguments
 *
 * Return: number of characters printed
*/

int print_d(va_list args)
{
	int count = 1, numcopy = 0;
	unsigned int n;

	n = va_arg(args, int);
	numcopy = n;
	if (numcopy < 0)
	{
		_putchar('-');
		numcopy = numcopy * -1;
		n = numcopy;
		count++;
	}

	for (; n > 9; n /= 10)
	{
		count++;
	}
	d_recur(numcopy);
	return (count);
}
