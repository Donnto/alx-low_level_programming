#include "main.h"

/**
 * _puts - starting point of a function.
 *
 * @s: a string
 *
 * Desription: prints a string.
 *
 * Return: No return value.
 */

void _puts(char *str)
{
	int count = 0;

	while (*(str + count))
	{
		_putchar(*(str + count));
			count++;
	}
	_putchar('\n');
}
