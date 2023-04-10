#include "main.h"

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * Description: function that searches a string for any of a set of bytes
 *
 * @s: string to search
 * @accept: characters to look out for
 *
 * Return: pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int s_index, accept_index;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		for (accept_index = 0; accept[accept_index] != '\0';
				accept_index++)
		{
			if (s[s_index] == accept[accept_index])
			{
				return ((s + s_index));
			}
		}

	}

	return (0);
}
