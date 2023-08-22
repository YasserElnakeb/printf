#include "main.h"
/**
 * print_integer - prints integer
 * @n : integer to print
 * Return: number of characters printed
 */
int print_integer(int n)
{
int num, digit, unit_digit = n % 10, divisor = 1, _return = 1;
n = n / 10;
num = n;
if (unit_digit < 0)
{
_return += _putchar('-');
num = -num;
n = -n;
unit_digit = -unit_digit;
}
if (num > 0)
{
while (num / 10 != 0)
{
divisor *= 10;
num /= 10;
}
num = n;
while (divisor > 0)
{
digit = num / divisor;
_return += _putchar(digit + '0');
num -= (digit *divisor);
divisor /= 10;
}
}
_putchar(unit_digit + '0');
return (_return);
}
