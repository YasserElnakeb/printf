#include "main.h"
/**
 * print_uint_to_bin - function take unsigned number and
 *                     print it in binary
 *@n: number to print
 * Return: number of printed chars
 */
int print_uint_to_bin(unsigned int n)
{
int mask = 0, _return = 0, lastprinted = 0;
mask = (1 << (sizeof(unsigned int) * 7));

while (mask > 0)
{
if (n & mask)
{
_return += _putchar('1');
lastprinted = 1;
}
else if (lastprinted || mask == 1)
_return += _putchar('0');
mask >>= 1;
}
return (_return);

}
