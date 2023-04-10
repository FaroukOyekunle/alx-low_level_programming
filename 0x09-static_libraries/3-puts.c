#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line.
 *
 * Description: function that prints a string, followed by a new line, to
 * stdout
 *
 * @str: String pointer
 *
 * Return: void
 */

void _puts(char *str)
{
	int index;

	for (index = 0; *(str + index) != '\0'; index++)
	{
		_putchar(*(str + index));
	}
	_putchar('\n');
}
