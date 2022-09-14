#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * 
 * @n: input number
 * Return : 0 
 */
void print_to_98(int n)
{
	int count;

	for (count = n; count > 98; --count)
		printf("%d", count);
	else
		for( count = n; count < 98; ++count)
			printf("%d", count);
	printf("98\n");
}
