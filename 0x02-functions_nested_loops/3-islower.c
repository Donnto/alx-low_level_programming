#include "main.h"
/**
 * _islower- checks for lowercase character
 *
 * @c is the int we will use for the argument of the
 * fuction.
 *
 * Return : 1 if c is lower return 0 otherwise
 */
int _islower (int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar('\n');
}

