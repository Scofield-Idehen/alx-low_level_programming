#include "main.h"

/**
 * get_bit - Function that retrieves the value of a bit at a given index.
 * @n: The number whose bit value is to be retrieved.
 * @index: The index of the bit to be retrieved.
 *
 * Return: Ret 1 if the bit is set (1) at d given index, or -1 if err occurred.
 **/
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int result;

if (index >= sizeof(n) * 8)
return (-1);

result = 1UL << index;

return ((n & result) ? 1 : 0);
}
