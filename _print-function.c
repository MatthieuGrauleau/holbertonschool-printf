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
 * print_d - print a decimal
 *
 * @args: arguments to print
 *
 * Return: the number of digits printed
 */

int print_d(va_list args)
{
	int num = va_arg(args, int);
	int count = 0;
	int divisor = 1;

	if (num == INT_MIN)
	{
		_putchar('-');
		count++;
		num = -(INT_MAX % 10) - 1;
	}

	if (num < 0)
	{
		_putchar('-'); /**Print '-' for a negative number.*/
		count++;
		num = -num; /**Convert the num to a positive num*/
		}

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num / divisor > 9)
	{
		divisor *= 10; /**Increment the divisor until is greater than the num*/
	}

	while (divisor > 0)
	{
		int digit = num / divisor; /**Extract the last digit*/

		_putchar(digit + '0');
		count++;
		num %= divisor; /**Update the num by removing the last digit*/
		divisor /= 10; /**Update the divisor for the next digit*/
	}
	return (count);
}
