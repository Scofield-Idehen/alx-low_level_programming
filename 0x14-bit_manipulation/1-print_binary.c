#include "main.h"
#include <stdio.h>

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: Number to print in binary.
 **/
void print_binary(unsigned long int n)
{
unsigned long int mask = 1UL << (sizeof(n) * 8 - 1);

if (n == 0)
{
putchar('0');
return;
}

while ((n & mask) == 0)
mask >>= 1;

while (mask)
{
putchar((n & mask) ? '1' : '0');
mask >>= 1;
}
}
