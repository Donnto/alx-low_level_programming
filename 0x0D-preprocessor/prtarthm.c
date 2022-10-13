#include <stdio.h>

/**
 * main - illustrates pointer arithmetic.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a[5];

	a[0] =  98;
	a[1] = 198;
	a[2] = 298;
	a[3] = 398;
	a[4] = 498;

	printf("Value of 'a[0]' is: %d\n", a[0]);
	printf ("Value of 'a[1]'is: %d\n", a[1]);
	printf("Value of 'a[2]' is %d\n", a[2]);
	printf("Value of 'a[3]' is %d\n", a[3]);
	printf("Value of 'a[4]' is %d\n", a[4]);

	print("Address of 'a' is %p\n", 
