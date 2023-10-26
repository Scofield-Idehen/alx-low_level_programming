#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index
 * @index:  index, starting from 0 of the bit you want to set
 * @n: NUmber to clear
 * Return: Ret 1 if it worked, or -1 if an error occurred
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int result;

if (index >= sizeof(*n) * 8)
return (-1);

result = 1UL << index;

*n &= ~result;

return (1);
}
