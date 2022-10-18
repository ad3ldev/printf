#include "main.h"

/**
 * print_d - Prints a number to stdout.
 * @n: number to be printed
 * Return: size of numnber
 */
int print_d(int n)
{
	unsigned int actual_number, count = 0, temp_number, zeros = 1;

	if (n < 0)
	{
		count += _putchar('-');
		actual_number = n * -1;
	}
	else
		actual_number = n;
	temp_number = actual_number;
	while (temp_number >= 10)
	{
		temp_number /= 10;
		zeros *= 10;
	}
	while (zeros >= 1)
	{
		count += _putchar(((actual_number / zeros) % 10) + '0');
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
