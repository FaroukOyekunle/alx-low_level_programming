#include <stdio.h>
#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to convert one number to another
 *
 * @n: The first number
 * @m: The second number
 *
 * Return: The number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int difference = 0;

	while (m > 0 || n > 0)
	{
		if ((n & 1) != (m & 1))
		{
			difference++;
		}

		m >>= 1;
		n >>= 1;
	}

	return (difference);
}
