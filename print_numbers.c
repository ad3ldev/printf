#include "main.h"

/**
 * print_d - Prints a number to stdout.
 * @n: number to be printed
 * @count: counting of number;
 * Return: size of numnber
 */
int print_d(int n, int count)
{
	if (n > 10)
	{
		count = print_d(n / 10, count);
	}
	putchar(n % 10 + '0');
	return (count + 1);
}

/**
 * print_i - Prints a int to stdout.
 * @n: number to be printed
 * Return: size of numnber
 */
int print_i(int n)
{
	return (print_d(n, 0));
}
