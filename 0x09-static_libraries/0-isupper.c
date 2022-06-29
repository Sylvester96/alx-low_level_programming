#include "main.h"
#include <ctype>

/**
 * _isupper - checks if value is upercase
 * @c: value to be checked
 * Return: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	int res;

	if (isupper(c))
		res = 1;
	else
		res = 0;

	return (res);
}
