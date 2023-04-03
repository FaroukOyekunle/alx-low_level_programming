#include "main.h"

/**
 *  _memset - function that fills memory with a constant byte
 *
 *  Description: function that fills memory with a constant byte
 *
 *  @s: buffer to overwrite
 *  @b: constant char to write to buffer
 *  @n: number of bytes to overwrite
 *
 *  Return: return pointer to start of oveerwritten buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*(s + index) = b;
	}

	return (s);
}
