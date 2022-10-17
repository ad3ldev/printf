#include "main.h"

/**
 * _printf - Prints output acording to an input format.
 * @format: Pointer to a formated string
 *
 * Return: number of characters printed to the screen
 */
int _printf(const char *format, ...)
{
	int i;
	va_list next;
	int count;

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
				continue;
			} else if (format[i + 1] == 's')
			{
				_puts(va_arg(next, char *));
				i++;
				continue;
			} else if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
				continue;
			} else if (format[i + 1] == 'd')
			{
				count += print_d(va_arg(next, int), 0);
				i++;
				continue;
			} else if (format[i + 1] == 'i')
			{
				count += print_i(va_arg(next, int));
				i++;
				continue;
			}
		}
		_putchar(format[i]);
		count++;
	}
	va_end(next);
	return (count);
}
