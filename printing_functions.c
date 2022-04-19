#include "main.h"
/**
*print_sign - func that prints the percentage and increments count
*@param: string to be looped through
*@count: counter of number of char printed
*Return: incremented count
*/

int print_sign(__attribute__((unused)) va_list param, unsigned int count)
{
_putchar('%');
return (++count);
}
/**
 * print_char -func that prints a character and increases count
 * @param: character param to print from va_list
 * @count: counter of number of chars printed
 * Return: incremented count
 */
int print_char(va_list param, unsigned int count)
{
_putchar(va_arg(param, int));
return (++count);
}

/**
 * print_string - func that prints a string and increases count
 * @param: current string param to print from va_list
 * @count: counter of number of chars printed
 * Return: counter increased by string length
 */
int print_string(va_list param, unsigned int count)
{
unsigned int i, len = 0;
char *str = va_arg(param, char *);
if (str == NULL)
{
str = "(null)";
}
len = _strlen(str);
for (i = 0; i < len; i++)
{
_putchar(str[i]);
}
return (count + i); 
}
