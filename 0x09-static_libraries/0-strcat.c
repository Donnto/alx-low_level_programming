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
	int dest_len = 0, i;

	while (dest[dest_len])
		dest_len++;

	for (i = 0; scr[i] != 0; i++)
	{
		dest[dest_len] = scr[i];
		dest_len += 1;
	}
	dest[dest_len] = '\0';
	return (dest);
}
