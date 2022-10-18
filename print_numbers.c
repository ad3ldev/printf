#include "main.h"

/**
 * print_d - Prints a number to stdout.
 * @n: number to be printed
 * @count: counting of number;
 * Return: size of numnber
 */
int print_d(int n, int count)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n > 10)
	{
		count = print_d(n / 10, count);
	}
	_putchar(n % 10 + '0');
	return (count + 1);
}

/**
	@@ -28,5 +35,5 @@ int print_d(int n, int count)
 */
int print_i(int n)
{
	return (print_d(n, 0));
}
