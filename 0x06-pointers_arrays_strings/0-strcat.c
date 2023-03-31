#include "main.h"

/**
 * _strcat - function that concatenates two strings
 *
 * Description: function that concatenates two strings
 *
 * @dest: String to place at the start
 * @src: String to place at the end
 *
 * Return: Pointer to concatenated string
 */

char *_strcat(char *dest, char *src)
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

	for (index_src = 0; index_src < length_src; index_src++)
	{
		*(dest + (index_dest + index_src)) = *(src + index_src);
	}

	return (dest);
}
