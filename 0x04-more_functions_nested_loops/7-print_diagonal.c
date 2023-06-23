#include "main.h"

/**
* print_diagonal - print a diagonal line
*
*@n: is the number of time the character
*
**/

void print_diagonal(int n)

	int bab;
	int yay;

	if (n <= 0)
		_putchar("\n");
	else
	{
		for (bab = 1; bab <= n; bab++)
		{
			for (yay = 1; yay <= bab; yay++)
				_putchar(' ');
			_putchar(92); /*is equal to '/' char*/
			_putchar('\n');
		}
	}
}
