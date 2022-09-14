#include "main.h"
/**
 * jack_baure - prints minutes of the day
 * 
 * Return : no return value
 */
void jack_baure(void)
{
	int hour = 0;
	int minute = 0;
	int hours_remainder;
	int minutes_remainder;

	while (hours <= 23)
	{
	while (minute <= 59)
	{

	hours_remainder = hours % 10;
	_putchar(hours /10 + '0');
	_putchar(hours_remainder + '0');
	_putchar(':');
	_putchar(minute / 10 + '0');
	_putchar(min_remainder + '0');
	minute++;
	_putchar('\n');
	}
	hours++;
	minute = 0;
}
}
