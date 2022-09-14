#include "main.h"
/**
 * 2-print_alphabet_x10.c - prints lower case alphabet ten
 * times followed by a newline
 *
 * Return:Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
