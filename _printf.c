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
		{'s', print_s}
		};
	va_start(args, format);
	i = 0;

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				print_percentage();
				count++;
				i++;
			} else
			{
				j = 0;
				while (style[j].type)
				{
					if (style[j].type == format[i + 1])
					{
						count += style[j].f(args);
						i++;
					}
						j++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
			i++;
	}
		va_end(args);
		return (count);
}
