#include "main.h"

/**
 * compare - compare head and tail
 * @head: Index from the left
 * @tail: Index starting from the right
 *
 * Return: 1 if palindrome, 0 if not
 */

int compare(char *head, char *tail)
{
	if (head >= tail)
		return (1);

	if (*head == *tail)
		return (compare(head + 1, tail - 1));

	return (0);
}

/**
 * _strlen - find length of string to access last index
 * @s: Parameter passed
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;

	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - function that prints palindrome
 * @s: Parameter passed
 *
 * Return: 0 as success
 */

int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (compare(s, (s + len - 1)));
}
