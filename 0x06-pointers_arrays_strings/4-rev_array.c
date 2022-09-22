#include "main.h"

/**
 * reverse_array - Reverses the content of an array of
 * interger.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array
 * 
 * Return: no return value.
 */
void reverse_array(int *a, int n)
{
	int temp, i, j;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = temp;
		}
	}
}
