#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @new_string: Pointer to the string value to print.
 *
 * Return: None.
 */
int _puts(char *new_string)
{
	int i, count = 0;

	if (new_string == NULL)
		new_string = "(null)";
	for (i = 0; new_string[i] != '\0'; i++)
		count += _putchar(new_string[i]);
	return (count);
}

/**
 * print_rev - prints string in reverse
 *
 * @s: string to be printed
 */
int print_rev(char *s)
{
	int i, count;

	count = 0;
	if (s == NULL)
		s = "(null)";
	for (i = (_strlen(s) - 1); i >= 0; i--)
	{
		_putchar(s[i]);
		count++;
	}
	return (count);
}
