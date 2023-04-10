#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * Description: function that compares two strings
 *
 * @s1: String to compare
 * @s2: String to compare
 *
 * Return: 0, if the s1 and s2 are equal;
 * a negative value if s1 is less than s2;
 * a positive value if s1 is greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
	int index_s2, index_s1, length_s2, length_s1, s2_end, s1_end;

	s2_end = s1_end = length_s2 = length_s1 = index_s2 = index_s1 = 0;
	while (1)
	{
		if (s2_end == 1 && s1_end == 1)
			break;

		if (*(s1 + index_s2) == '\0')
		{
			s2_end = 1;
		}
		else
		{
			length_s2++;
			index_s2++;
		}

		if (*(s2 + index_s1) == '\0')
		{
			s1_end = 1;
		}
		else
		{
			length_s1++;
			index_s1++;
		}
	}
	for (index_s1 = 0; index_s1 < length_s1; index_s1++)
	{
		if (s1[index_s1] != s2[index_s1])
		{
			return (s1[index_s1] - s2[index_s1]);
		}
	}
	return (0);
}
