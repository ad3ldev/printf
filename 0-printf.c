#include "main.h"

/**
 * _printf - Prints output acording to an input format.
 * @format: Pointer to a formated string
 *
 * Return: number of characters printed to the screen or -1 if error
 */
int _printf(const char *format, ...)
{
	int i, count;
	va_list next;

	count = 0;
	va_start(next, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	if (format[0] == '%' && format[1] == '\0')
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(next, int));
				i++;
				count++;
			} else if (format[i + 1] == 's')
			{
				count += _puts(va_arg(next, char *));
				i++;
			} else if (format[i + 1] == '%')
			{
				_putchar('%');
				i++;
				count++;
			} else if (format[i + 1] == 'd')
			{
				count += print_d(va_arg(next, int));
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
