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
		str = "(null)";
	for (i = 0; new_string[i] != '\0'; i++)
		count += _putchar(new_string[i]);
	return (count);
}
