#include "main.h"

/**
 * _strlen - starting point of a function.
 *
 * @s: a string 
 *
 * Return: length of string as interger.
 */
int _strlen(char *s)
{
	int i = 0;

	while (*(s + i))
		i++;
	return (i);
}
