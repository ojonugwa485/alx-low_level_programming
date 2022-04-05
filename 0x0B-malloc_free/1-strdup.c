#include <stdlib.h>

/**
 * *_strdup - a function that duplicates a string
 *
 * @str: input string to duplicate
 *
 * Return: NULL if str == NULL
 *         @str
 */

char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *z;

	if (str == NULL)
		return (NULL);

	/*calculate size of str*/
	while (str[j] != '\0')
		j++;

	z = malloc((j + 1) * sizeof(char));
	if (z == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		z[i] = str[i];
		i++;
	}
	return (z);
}
