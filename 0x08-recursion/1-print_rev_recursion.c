#include "main.h"

/**
 * _strlen_recursion - function that returns the length
 * of a string.
 * @s: string 
 * Return : No Return.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
