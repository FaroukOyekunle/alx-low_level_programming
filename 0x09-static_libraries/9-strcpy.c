#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src
 *
 * Description: function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 *
 * @dest: Destination String
 * @src: Source String
 *
 * Return: Destination buffer
 */

char *_strcpy(char *dest, char *src)
{
	int index_one, index_two, length;
	char temp;

	length = 0;

	for (index_one = 0; *(src + index_one) != '\0'; index_one++)
	{
		length++;
	}

	*(dest + length) = '\0';

	for (index_two = 0; index_two < length; index_two++)
	{
		temp = *(src + index_two);
		*(dest + index_two) = temp;
	}
	return (dest);
}
