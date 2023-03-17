#include <stdio.h>

/**
 * main - print out sizes of data types in c
 *
 * Return: 0 always
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %i byte(s)\n", sizeof(a));
	printf("size of int: %i byte(s)\n", sizeof(b));
	printf("size of a long int: %i byte(s)\n", sizeof(c));
	printf("size of a long long int: %i byte(s)\n", sizeof(d));
	printf("size of a float: %i byte(s)\n", sizeof(f));
	return (0);
}
