#include "main.h"
/**
 * 2-print_alphabet_x10.c - print the alphabet 10 times
 *
 * Return: Always 0 success
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (j = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
