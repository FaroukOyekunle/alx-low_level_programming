#include "main.h"

/**
 * _memset - function that fills memory with a constant byte
 *
 * Description: function that fills memory with a constant byte
 *
 * @s: buffer to overwite
 * @b: constant char to write to buffer
 * @n: number of bytes to overwrite
 *
 * Return: return poiter to start of overwiten buffer
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
