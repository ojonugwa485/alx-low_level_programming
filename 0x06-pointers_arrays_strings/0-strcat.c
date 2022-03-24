#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer parameter for string
 * @src: pointer parameter for second string
 *
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int l, j;

	l = 0;

	while (dest[l] != '\0')
	{
		++l;
	}
	for (j = 0; src[j] != '\0'; j++, ++l)
	{
		dest[l] = src[j];
	}
	return (dest);
}
