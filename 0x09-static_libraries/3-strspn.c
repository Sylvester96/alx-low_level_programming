#include "main.h"

/**
 * _strspn - not certain
 * @s: string to check
 * @accept: accept value
 * Return: number of bytes in initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
