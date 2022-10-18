#include "main.h"

/**
 * choose_function - choose which function to use to print
 * @specifier: specifier character
 * @next: the va_list that has the variables to be printed
 * Return: number of characters printed
 */
int choose_function(char specifier, va_list next)
{
	int count = 0;

	switch (specifier)
	{
		case 'c':
			count += _putchar(va_arg(next, int));
			break;
		case 's':
			count += _puts(va_arg(next, char *));
			break;
		case 'd':
			count += print_d(va_arg(next, int));
			break;
		case 'i':
			count += print_i(va_arg(next, int));
			break;
		case 'b':
			count += print_bin(va_arg(next, int));
			break;
		case 'r':
			count += print_rev(va_arg(next, char *));
			break;
		case 'R':
			count += rotate(va_arg(next, char *));
			break;
		default:
			count += _putchar('%') +  _putchar(specifier);
			break;
	}
	return (count);
}


/**
 * _printf - Prints output acording to an input format.
 * @format: Pointer to a formated string
 *
 * Return: number of characters printed to the screen or -1 if error
 */
int _printf(const char *format, ...)
{
	int count = -1;

	if (format != NULL)
	{
		int i;
		va_list next;

		va_start(next, format);
		if (format[0] == '%' && format[1] == '\0')
			return (count);
		count = 0;
		for (i = 0; format[i] != '\0'; i++)
		{
			if (format[i] == '%')
			{
				if (format[i + 1] == '%')
				{
					count += _putchar(format[i]);
					i++;
				}
				else if (format[i + 1] != '\0')
				{
					count += choose_function(format[i + 1], next);
					i++;
				}
			}
			else
			{
				count += _putchar(format[i]);
			}
		}
		va_end(next);

	}
	return (count);
}
