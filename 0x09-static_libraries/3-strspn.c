#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * Description: function that gets the length of a prefix substring
 *
 * @s: string to search
 * @accept: characters to look out for
 *
 * Return: the ocurences of the charecters in the accept string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int s_index, accept_index, number_of_matches, has_match;

	number_of_matches = 0;

	for (s_index = 0; s[s_index] != '\0'; s_index++)
	{
		has_match = 0;
		for (accept_index = 0; accept[accept_index] != '\0';
				accept_index++)
		{
			if (s[s_index] == accept[accept_index])
			{
				number_of_matches++;
				has_match = 1;
				break;
			}
		}

		if (!has_match)
			return (number_of_matches);
	}

	return (number_of_matches);
}
