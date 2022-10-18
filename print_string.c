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
 * Return: count
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

/**
 * rotate - prints 13th character after
 * @s: string
 * Return: count
 */
int rotate(char *s)
{
	int n, count, i;
	int key;

	n = 0;
	key = 13;
	count = 0;
	if (s == NULL)
		s = "(null)";
	for (i = 0; i < _strlen(s); i++)
	{
		if (!_isalpha(s[i]))
		{
			_putchar(s[i]);
			count++;
		}

		if (_islower(s[i]))
		{
			n = s[i] - 97;
			n = (n + key) % 26;
			_putchar(n + 97);
			count++;
		}
		if (_isupper(s[i]))
		{
			n = s[i] - 65;
			n = (n + key) % 26;
			_putchar(n + 65);
			count++;
		}
	}
	return (count);
}
