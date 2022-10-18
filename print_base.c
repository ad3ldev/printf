#include "main.h"
/**
 * print_bin - prints out the binary
 * of any number given
 *
 * @x: number given
 * Return: count
 */
int print_bin(unsigned int x)
{
	int tmp[64];
	int i, j, count;

	count = 0;
	if (x == 0)
	{
		_putchar('0');
		count++;
	}

	if (x)
	{
		for (i = 0 ; x > 0; i++)
		{
			tmp[i] = x % 2;
			x /= 2;
		}

		for (j = i - 1; j >= 0; j--)
		{
			_putchar(tmp[j] + '0');
			count++;
		}
	}
	return (count);
}
