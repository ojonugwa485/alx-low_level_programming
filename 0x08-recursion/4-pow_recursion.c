#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - prints power of a value
 * @x: parameter one
 * @y: parameter two
 *
 * Return: 0 as success
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
