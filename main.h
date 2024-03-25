#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_c(va_list args);

/**
 * struct type - Struct type
 * 
 * @type: the type
 * @f: the function associated
*/

typedef struct type
{
    char type;
    void (*f)(va_list);
} type_t;

#endif