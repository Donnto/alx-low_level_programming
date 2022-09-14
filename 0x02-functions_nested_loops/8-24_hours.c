#include "main.h"
/**
 * jack_bauer - prints minutes of the day
 * 
 * Return : 0
 */
void jack_bauer(void)
{
	int hour = 0;
	int minutes = 0;
	int hour_remainder;
	int mins_remainder;

	while (hour <= 23)
	{
	while (minutes <= 59)
	{
	mins_remainder = minutes % 10;
	hour_remainder = hour % 10;
	_putchar(hour /10 + '0');
	_putchar(hour_remainder + '0');
	_putchar(':');
	_putchar(minutes / 10 + '0');
	_putchar(mins_remainder + '0');
	minutes++;
	_putchar('\n');
	}
	hour++;
	minutes = 0;
}
}
