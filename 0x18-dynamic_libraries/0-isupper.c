#include "main.h"
#include <stdio.h>
/**
 *_isupper - This function check the uppercase character
 *Return: is (1) to uppercase, is (0) for otherwise
 *@c: This variable is an one character of the Ascii
 */

int _isupper(int c)
{
		if (c >= 65 && c <= 90)
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
