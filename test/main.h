#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *new_string);
int print_d(int n, int count);
int print_i(int n);

#endif
