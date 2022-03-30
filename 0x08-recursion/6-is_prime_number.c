#include "main.h"

/**
 * is_prime - recursively divide by higher divisor, skip even nums
 * @n: parameter one
 * @divisor: parameter two
 *
 * Return: 0 as success
 */

int is_prime(int n, int divisor)
{
	if (n == divisor)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime(n, divisor + 1));
}

/**
 * is_prime_number - check if prime
 * @n: Parameter to check
 *
 * Return: 1 if prime, 0 if not prime
 */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
		return (0);

	if (n == 2)
		return (1);

	return (is_prime(n, divisor));
}
