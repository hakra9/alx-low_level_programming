#include "main.h"
/**
 * _strlen - returns the length of a string
 * @c: string
 * Return: length
 */
int _strlen(char *c)
{
	int long = 0;

	while (*c != '\0')
	{
		long++;
		c++;
	}

	return (long);
}

