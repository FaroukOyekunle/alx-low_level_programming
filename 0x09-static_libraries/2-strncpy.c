#include "main.h"

/**
 * _strncpy - function that copies a string
 *
 * Description: function that copies a string
 *
 * @dest: String to place at the start
 * @src: String to place at the end
 * @n: Number of bytes to concatenate
 *
 * Return: Pointer to concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index_src, index_dest, length_src, length_dest, src_end, dest_end;

	src_end = dest_end = length_src = length_dest = 0;
	index_src = index_dest = 0;
	while (1)
	{
		if (src_end == 1 && dest_end == 1)
			break;

		if (*(src + index_src) == '\0')
		{
			src_end = 1;
		}
		else
		{
			length_src++;
			index_src++;
		}

		if (*(dest + index_dest) == '\0')
		{
			dest_end = 1;
		}
		else
		{
			length_dest++;
			index_dest++;
		}
	}

	for (index_dest = 0; index_dest < n && src[index_dest] != '\0'; index_dest++)
		dest[index_dest] = src[index_dest];
	for ( ; index_dest < n; index_dest++)
		dest[index_dest] = '\0';

	return (dest);
}
