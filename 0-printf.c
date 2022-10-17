#include "main.h"

/**
 * _printf - Prints output acording to an input format.
 * @format: Pointer to a formated string
 *
 * Return: number of characters printed to the screen
 */
int _printf(const char *format, ...)
{
	int i, count;
	va_list next;

	count = 0;
	va_start(next, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(next, int));
				i++;
			} else if (format[i + 1] == 's')
			{
				_puts(va_arg(next, char *));
				i++;
			} else if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
				count++;
			} else if (format[i + 1] == 'd')
			{
				count += print_d(va_arg(next, int), 0);
				i++;
			} else if (format[i + 1] == 'i')
			{
				count += print_i(va_arg(next, int));
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(next);
	return (count);
}
