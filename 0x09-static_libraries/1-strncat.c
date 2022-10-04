#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 * @dest: destination string to be appended on.
 * @src: source string to be appended to dest.
 * @n: number of bytes from source to be appended to dest.
 * Return: a pointer to the result string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
