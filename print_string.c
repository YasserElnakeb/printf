#include "main.h"

/**
 * print_string - function that print a string
 * @str : pointer to the string
 * Return: -1 if failed
 *          or number of chars printed if successfull
 */

int print_string(char *str)
{

int _return = 0;
int i;

if (str == NULL)
{
str = "(null)";
}

for (i = 0; str[i] != '\0' ; i++)
{
_return += _putchar(str[i]);
}

return (_return);
}
