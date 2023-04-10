#include "main.h"

/**
 * _strchr - function that locates a character in a string
 *
 * Description: function that locates a character in a string
 *
 * @s: string to search
 * @c: character to search for
 *
 * Return: pointer to the first occurance of the character
 */

char *_strchr(char *s, char c)
{
	int index, s_length;

	s_length = 0;

	for (index = 0; *(s + index) != '\0'; index++)
		s_length++;

	index = 0;

	while (index <= s_length)
	{
		if (*(s + index) == c)
			return (s + index);
		index++;
	}

	return (0);
}
