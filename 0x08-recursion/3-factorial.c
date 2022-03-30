#include "main.h"

/**
 * factorial - get factorial of a given number
 * @n: Parameter passed
 *
 * Return: 0 as success
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
