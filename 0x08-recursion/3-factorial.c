#include "main.h"

/**
 * factorial - function that returns factorial of a given
 * number.
 * @n: input number
 * Return: factorial of a given number.
 */
int factorial(int n)
{
	if (n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
