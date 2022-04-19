#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
/**
 *struct type - function that corresponds character type to function
 *@t: char type
 *@f: printing pointer
 */

typedef struct type
{
char t;
int (*f)();
} type;
int _printf(const char *format, ...);
int _putchar(char c);
int print_sign(__attribute__((unused)) va_list param, unsigned int count);
int print_char(va_list param, unsigned int count);
int print_string(va_list param, unsigned int count);
unsigned in _strlen(char *s);
#endif
