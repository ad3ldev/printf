#include "main.h"

/**
 * _puts - Prints a string to stdout.
 * @new_string: Pointer to the string value to print.
 *
 * Return: None.
 */
int _puts(char *new_string)
{
	int i;
	int count;

	count = 0;
	for (i = 0; new_string[i] != '\0'; i++)
	{
		if (new_string[i] == 92 && new_string[i + 1] == 92)
		{
			_putchar(92);
			i += 1;
		} else if (new_string[i] == 92 && new_string[i + 1] == 110)
		{
			_putchar('\n');
			i += 1;
		} else if (new_string[i] == 92 && new_string[i + 1] == 22)
		{
			_putchar(22);
			i += 1;
		} else
		{
			_putchar(new_string[i]);
		}
		count++;
	}
	return (count);
}
