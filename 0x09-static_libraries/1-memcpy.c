#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * Description: function that copies memory area
 *
 * @dest: buffer to overwite
 * @src: buffer to copy
 * @n: number of bytes to overwrite
 *
 * Return: return poiter to start of overwiten buffer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		*(dest + index) = *(src + index);
	}

	return (dest);
}
