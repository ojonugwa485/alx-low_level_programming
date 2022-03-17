#include "main.h"
#include "stdio.h"

/**
 * _isupper - function that check in uppercase variable entry
 * @c: Variable that entry
 * Return: 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
