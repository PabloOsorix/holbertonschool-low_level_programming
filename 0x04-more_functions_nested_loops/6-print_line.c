#include "holberton.h"
/**
 *print_line - This function draws a straight line in the terminal.
 *@n: is the number of times that character 95 ('_') prints
 */
void print_line(int n)
{
	int r;

	for (r = 1; r <= n; r++)

	{
		if (n >= 1)
		{
			_putchar(95);
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
