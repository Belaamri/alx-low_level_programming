 #include "main.h"
/**
 * times_table- prints the 9 times table start with 0
 *
 * Return: void
 */
void times_table(void)
{
	int n, m, mult;

	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 9; m++)
		{
			mult = (m * n);
			if (mult <= 9)
			{
				_putchar(mult + 48);
			}
			else
			{
				_putchar(mult / 10 + 48);
				_putchar(mult % 10 + 48);
			}
			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((n * (m + 1)) <= 9 &&  m != 9)
				_putchar(' ');
		}
		_putchar('\n');
	}
}


