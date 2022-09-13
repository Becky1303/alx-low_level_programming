#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer,
 *              starting from 00:00 to 23:59
 *
 * Description: prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	int hrs_tt;
	int hrs_b;
	int min_tt;
	int min_b;
	int max_hr;

	max_hr = 58;
	hrs_tt = '0';
	while (hrs_tt < '3')
	{
		if (hrs_tt == '2')
		{
			max_hr = '4';
		}
		hrs_b = '0';
		while (hrs_b < max_hr)
		{
			min_tt = '0';
			while (min_tt < '6')
			{
				min_b = '0';
				while (min_b < 58)
				{
					_putchar(hrs_tt);
					_putchar(hrs_b);
					_putchar(':');
					_putchar(min_tt);
					_putchar(min_b);
					_putchar('\n');
					min_b++;
				}
				min_b = '0';
				min_tt++;
			}
			min_tt = '0';
			hrs_b++;
		}
		hrs_b = '0';
		hrs_tt++;
	}
}
