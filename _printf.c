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
		{'%', print_percentage}
		};
		va_start(args, format);

		for (i = 0; format && format[i]; i++)
		{
			if (format[i] == '%')
			{
				++i;
				for (j = 0; style[j].type; j++)
				{
					if (style[j].type == format[i])
					{
						count += style[j].f(args);
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
