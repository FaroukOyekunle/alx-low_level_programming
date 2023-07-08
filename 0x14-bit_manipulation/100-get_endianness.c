#include <stdio.h>
#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine
 *
 * Description: Determines whether the machine is little endian or big endian
 *
 * Return: 1 if the machine is little endian, 0 otherwise
 */
int get_endianness(void)
{
	unsigned int x = 0x76543210;
	char *c = (char *)&x;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
