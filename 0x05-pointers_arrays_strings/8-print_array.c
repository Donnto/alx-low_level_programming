#include "main.h"
#include <string.h>

/**
 * print_array - prints array of n intergers followed by a
 * new line
 *
 * @a: first value.
 *
 * @n: second value.
 *
 * Returns : no return value.
 */
void print_array(int *a, int n);
{
	int i = 0;

	while (i < n)
	{
		if (i < (n - 1))
		{
			printf("%i, ", a[i]);
		}
		else
		{
			printf("%i", a[i]);
		}
		i++;
	}
	printf("\n");
}

