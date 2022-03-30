#include "main.h"
/**
 * find_root - find square root of n, starting from the smallest possible, 0
 * @n: Parameter passed
 * @root: parameter two for testing
 *
 * Return: 0 as success
 */

int find_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_root(n, root + 1));
}

/**
 * _sqrt_recursion - prints square root of a function
 * @n: Parameter passed
 * Return: 0 as success
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (find_root(n, 0));
}
