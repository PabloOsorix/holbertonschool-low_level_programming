#include <stdio.h>
/**
 * main - Is the principal function
 * Return: (0) always is 0 (success)
 */

int main(void)

{

int i = 0x30;
int a = 0x61;
while (i <= 0x39)
{

putchar(i);
i++;
}


while (a <= 0x66)
{
	putchar(a);
	a++;
}
putchar(10);
return (0);
}
