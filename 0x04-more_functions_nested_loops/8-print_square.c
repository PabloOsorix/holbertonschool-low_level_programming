#include "holberton.h"
/**
 *print_square - This function prints a square
 *@size: is the variable who say us when times print square
 */

void print_square(int size)
{

	int e;
	int i;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	else
		for (e = 1; e <= size; e++)
		{
			for (i = 1; i <= size ; i++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
}
