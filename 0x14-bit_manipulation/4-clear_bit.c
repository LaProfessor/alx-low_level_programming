#include "main.h"

/**
 * clear_bit - sets the values of a given bit to 0
 * @n: pointer to the numbers to change as output
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}



