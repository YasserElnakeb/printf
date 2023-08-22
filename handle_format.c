#include "main.h"
/**
 * handle_format - funxtion to handle format
 * @char_format: character of format
 * @args: argument to print
 * Return: number of printed characters
 */
int handle_format(char char_format, va_list args)
{
int _return = 0;
switch (char_format)
{
case 'c':
_return += _putchar(va_arg(args, int));
break;
case 's':
_return += print_string(va_arg(args, char *));
break;
case 'i':
_return += print_integer(va_arg(args, int));
break;
case 'd':
_return += print_integer_d(va_arg(args, int));
break;
case 'b':
_return += print_uint_to_bin(va_arg(args, unsigned int));
break;
case '%':
_return += _putchar('%');
break;
default:
_return += _putchar('%');
_return += _putchar (char_format);
break;
}
return (_return);
}
