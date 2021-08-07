#include "main.h"

/**
  * get_bit - gets the value of a bit at given index
  * @n: decimal number, input
  * @index: index
  * Return: bit at index, -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i = 0;

	if (n == 0)
		return (0);
	if (index == 0)
		return (n & 1);
	while (i < index && n)
	{
		n = n >> 1;
		i++;
	}
	return (n & 1);
}
