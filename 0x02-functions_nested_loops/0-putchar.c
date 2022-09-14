#include <stdio.h>
#include "main.h"
/**
 * main - prints the string '_putchar' followed by a
 * newline
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char name[] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		putchar(name[i]);

	}
	putchar('\n');
	return (0);
}
