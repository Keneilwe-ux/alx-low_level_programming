#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print alphabet in lowercase
 *
 * Return: zero
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
