#include "holberton.h"
/**
 *jack_bauer - This function print every minute of the day
 *
 *
 */

void jack_bauer(void)
{
	int h;
	int m;
/** imprime todas las horas*/
	for (h = 0; h <= 23 ; h++)
	{
/** Al finalizar las horas, imprimira todos los minutos*/
		for (m = 0; m <= 59 ; m++)
		{
			/** ¿Como imprimir dos digitos?*/
			/**La division(/) toma el primer digito*/
			/** El modulo(%) toma el ultimo digito*/
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
}
}
}
