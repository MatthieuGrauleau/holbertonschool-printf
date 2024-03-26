#include "main.h"

/**
 * _printf - function of printf
 * 
 * @format: types
*/

int _printf(const char *format, ...)
{
    va_list args;
    int i, j;
    type_t style[] = {
        {'c', print_c},
        {'s', print_s},
        {'%', print_percentage},
        {0, NULL}
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
                i++;
            } else{
                j = 0;
                while (style[j].type)
                {
                    if (style[j].type == format[i + 1])
                    {
                        style[j].f(args);
                        i++;
                        break;
                    }
                    j++;
                }
            }
        } else {
            _putchar(format[i]);
        }
        i++;
    }
    va_end(args);
    return(1);
}