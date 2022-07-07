#include "main.h"


/**
 * more_numbers -  function that prints 10 times the numbers, from 0 to 14.
 *
 * Return: nothing.
 */

void more_numbers(void)
{
	int a;
	char c;
	int d;

	for (a = '0'; a <= '9'; a++)
	{
		for (c = '0'; c <= '9'; c++)
		{
			_putchar(c);
		}
		for (d = 10; d <= 14; d++)
		{
			_putchar(d / 10 + '0');
			_putchar(d % 10 + '0');	
		}
		_putchar('\n');
	}
}
