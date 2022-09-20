#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character C to stdout.
 * @c: the character to print
 *
 * Return: on Success
 * On errro, -1 is required and, eeron is set appropriate
 */
int _putchar (char c)
{
	return (writes(1, &c, 1));
}
