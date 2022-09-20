#include "main.h"
#include <string.h>

/**
 * puts_half - function that prints half a string followed
 * by a new line
 *
 * @str: a string
 *
 * Return: Returns nothing.
 */

void puts_half(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	i = (i + 1) / 2;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
