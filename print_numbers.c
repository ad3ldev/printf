#include "main.h"

/**
 * print_d - Prints a number to stdout.
 * @n: number to be printed
 * Return: size of numnber
 */
int print_d(int n)
{
	int count = 0, temp_number, zeros = 1;

	if (n < 0)
	{
		count += _putchar('-');
		n *= -1;
	}
	temp_number = n;
	while (temp_number >= 10)
	{
		temp_number /= 10;
		zeros *= 10;
	}
	while (zeros >= 1)
	{
		count += _putchar(((n / zeros) % 10) + '0');
		zeros /= 10;
	}
	return (count);
}

/**
 * print_i - Prints a int to stdout.
 * @n: number to be printed
 * Return: size of numnber
 */
int print_i(int n)
{
	return (print_d(n));
}
