#include "main.h"
/**
 * _printf - print function
 * @format : format of print
 * @... : variable number of parameter
 * Return: number of printed charaters
 */
int _printf(const char *format, ...)
{
va_list args;
int format_len = _strlen(format), i = 0, _return = 0;
va_start(args, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
for (i = 0 ; i < format_len && *(format) != '\0' ; ++i)
{
if (format[i] != '%')
_return += _putchar (format[i]);
else
{
i++;
if (format[i] == '\0' || format[i] == ' ' ||
(format[i] >= '0' && format[i] <= '9'))
return (-1);
_return += handle_format(format[i], args);
}
}
va_end(args);
return (_return);
}

