#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_percentage(void);
int print_d(va_list args);
int print_i(va_list args);
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
	int (*f)();
} type_t;

#endif
