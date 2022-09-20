#include "main.h"

/**
 * _puts - prints a string followed by a newline.
 * @s: a string.
 * Return:Return nothing.
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
