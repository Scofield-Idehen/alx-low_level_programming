#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Fun that calc the num of bits that need to be flipped
 *             in order to transform one number into another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The num of bits need to be changed in 'n' to become equal to 'm'.
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int diff_bits = n ^ m;
unsigned int count = 0;

while (diff_bits)
{
count += diff_bits & 1;
diff_bits >>= 1;
}

return (count);
}
