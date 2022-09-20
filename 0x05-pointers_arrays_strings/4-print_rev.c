#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse followed by a
 * newline.
 * @s: input string.
 * Return:no return.
 */

void print_rev(char *s)
{
	int count = 0;

	while (*(s + count))
		count++;
	count = count - 1;
	while (count >= 0)
	{
		_putchar(*(s + count));
			count--;
	}
	_putchar('\n');
}
