#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 *
 * followed by new line
 *
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	char c = 'a';
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 26; k++)
		{
			_putchar(c + k);
		}
		 _putchar(10);
	}
}
