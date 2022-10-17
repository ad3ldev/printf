#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @new_string: Pointer to the string value to print.
 *
 * Return: None.
 */
void _puts(char *new_string)
{
	for (i = 0; new_string[i] != '\0'; i++)
	{
		if (new_string[i] == '\' && new_string[i + 1] == '\')
		{
			_putchar('\')
			i += 1;
		} else if (new_string[i] == '\' && new_string[i + 1] == 'n')
		{
			_putchar('\n');
			1 += 1;
		} else if (new_string[i] == '\' && new_string[i + 1] == '"')
		{
			_putchar('\"');
			i += 1;
		} else
		{
			_putchar(new_string[i];
		}
	}
}
