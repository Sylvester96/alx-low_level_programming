#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Variadic function that takes in a variable number of
 * arguments and returns the sum of them all
 * @n: number of arguments being passed into the function
 * Return: the sum of all arguments
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int index, sum = 0;
	va_list nums;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}
