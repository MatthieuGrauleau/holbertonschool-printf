#include "main.h"

/**
 * _printf - function of printf
 *
 * @format: types
 * Return: 1 for success.
*/

int _printf(const char *format, ...)
{
	va_list args;
	int i, j, count = 0;
	type_t style[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percentage},
		{0, NULL}
		};
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			for (j = 0; style[j].type; j++)
			{
				if (style[j].type == format[i])
				{
					count += style[j].f(args);
					break;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
		va_end(args);
		return (count);
}
