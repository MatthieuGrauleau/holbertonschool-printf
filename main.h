#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_c(va_list args);
void print_s(va_list args);
void print_percentage(va_list args);
int _putchar(char c);
int _strlen(char *s);

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