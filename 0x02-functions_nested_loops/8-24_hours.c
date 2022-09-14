#include "main.h"
/**
 * jack_baure - prints minutes of the day
 * 
 * Return : Return 0
 */
void jack_baure(void)
{
	int min, hr;

	for (hr = 0; hr <= 23; ++hr)
	{
		for (min = 0; min <= 59 ++min)
		{
			_putchar((hr / 10) + 48);
			_putchar((hr % 10) + 48);
			_putchar(:);
			_putchar((min / 10) +);
			_putchar((min % 10) +);
			_putchar('/n');
		}
	}
}
