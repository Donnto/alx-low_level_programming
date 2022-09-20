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

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
