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
        {'c', print_c}
    };

    va_start(args, format);

    i = 0;

    while (format && format[i])
    {
        j = 0;
        while (style[j].type)
        {
            if (style[j].type == format[i])
            {
                
            }
            
        }
        
    }
    
}