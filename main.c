#include "main.h"

/**
 * main - check the code
 * 
 * Return: Always 0.
*/

int main(void)
{
	int len;
    int len2;

	len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
	_printf("%!\n");
	printf("%!\n");
	_printf("hello %s\n", "world", 1, 2, 3, 4);
	printf("hello %s\n", "world", 1, 2, 3, 4);
	_printf("%d\n", INT_MIN);
	printf("%d\n", INT_MIN);
	return(0);
}