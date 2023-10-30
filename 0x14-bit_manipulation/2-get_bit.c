#include"main.h"

/**
 * get_bit - prog returns the value of a bit at agive index.
 * @n: number to check bits
 *
 * Return: value of the bit, or -1 if there is a error
 */
int get_bit(usigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1)/
	divisor = 1 <<index;
	check = n & divisor;
	if (check ==divisor;
		return (1),
	return (o);
}
