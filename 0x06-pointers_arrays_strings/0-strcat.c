#include "main.h"
/**
 * _strcat - concatenates two strings
 * @phra: input value
 * @phras: input value
 *
 * Return: void
 */
char *_strcat(char *phra, char *phras)
{
	int i;
	int j;

	i = 0;
	while (phra[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (phras[j] != '\0')
	{
		phra[i] = phras[j];
		i++;
		j++;
	}

	phra[i] = '\0';
	return (phra);
}

