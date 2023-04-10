#include "main.h"
/**
* _islower - Program prints the lowercase alphabet
*
* Description: Program prints the lower case alphabet using
* _puthchar and a for loop over the ascii table character set
*
* @c: ASCII equivalent integer
*
* Return: 1 if lowercase and 0 otherwise
*
*/
int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
