#include "main.h"
/**
 * _islower- checks for lowercase character.
 * @c: is the integer value we will use for the argument
 * of the fuction.
 * Return : 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}

