#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	unsigned int num=0;

	while (xor)
		{
		if (xor & 1ul)
			num++;
		xor = xor >> 1;
		}
	return (num);
}
