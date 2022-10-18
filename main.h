#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *new_string);
int print_d(int n);
int print_i(int n);
int print_bin(unsigned int x);
int _strlen(char *s);
int print_rev(char *s);
int rotate(char *);
int _islower(int c);
int _isupper(int c);
int _isalpha(int c);

#endif
