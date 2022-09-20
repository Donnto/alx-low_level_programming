#include "main.h"

/**
 * _puts - starting point of the function.
 *
 * @str: a string.
 *
 * Description: prints a string.
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
}
