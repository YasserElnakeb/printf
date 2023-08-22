#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _strlen(const char *s);
int _putchar(char c);
int print_string(char *str);
int _printf(const char *format, ...);
int print_integer(int);
int print_integer_d(int);
int print_uint_to_bin(unsigned int);
int handle_format(char, va_list);

#endif
