#include <stdio.h>
#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 *
 * @n: The number to print in binary
 *
 * Return: Number of characters printed
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	unsigned long int mask = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int leading_zeros = 1;

	while (mask > 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			leading_zeros = 0;
		}
		else if (leading_zeros == 0)
		{
			_putchar('0');
		}

		mask >>= 1;
	}

	return;
}
