#include "main.h"
#include <string.h>

/**
 * puts2 - prints every character of a string starting
 * with a first character followed by a newline
 *
 * @str : a string.
 *
 * Returns : no return
 */

void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}

