#include "main.h"
/**
* _strlen - returns the length of a string
* @s: string
* Return: length
*/
int _strlen(const char *s)
{
int len = 0, i = 0;

while (s[i] != '\0')
{
len++;
i++;
}
return (len);
}
