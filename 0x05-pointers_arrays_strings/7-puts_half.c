#include "main.h"

/**
 * _strlen - returns the length of thr string
 * @s:  string.
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
	}

	return (longi);
}
