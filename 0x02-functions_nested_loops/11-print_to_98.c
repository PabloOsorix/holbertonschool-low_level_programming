#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * followed by a new line.
 * Return: Void.
 * @n: Number from wich numbers are printed up to 98
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
