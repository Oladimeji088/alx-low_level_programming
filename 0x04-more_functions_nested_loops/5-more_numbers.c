#include "main.h"
/**
 * print_diagonal - check for a digit
 *@n : number of \\ to be printed
 * Return:void
 */
void print_diagonal(int n)
{
	char n, c;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			c = n;
			if (n > 9)
			{
				_putchar('1');
				c = n %  10;
			}

			_putchar('0' + c);
		}
		
		_putchar('\n');
		i++;
	}
}
