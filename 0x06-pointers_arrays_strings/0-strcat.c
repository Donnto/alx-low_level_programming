#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings.
 * @dest: destination, first parameter.
 * @scr: source.
 * Return: returns string.
 */

char *_strcat(char *dest, char *scr)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; scr[i] != 0; i++)
	{
		dest[len] = scr[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
