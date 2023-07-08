#include <stdio.h>
#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a given index
 *
 * @n: Pointer to the number in which to clear the bit
 * @index: The index of the bit to clear (starting from 0)
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1UL << index);

	if ((~*n & (1UL << index)) != 0)
		return (1);
	else
		return (-1);
}
