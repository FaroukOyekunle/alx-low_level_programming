#include "main.h"
/**
* _isalpha - Program prints the lowercase alphabet
*
* Description: Program prints the lower case alphabet using
* _puthchar and a for loop over the ascii table character set
*
* @c: ASCII equivalent integer
*
* Return: 1 if Alphabet character Lower or Upper  and 0 otherwise
*
*/
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
