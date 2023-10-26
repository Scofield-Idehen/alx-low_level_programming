#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: Pointing to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars
 * in the string b that are not 0 or 1, or if b is NULL.
 **/

unsigned int binary_to_uint(const char *b)
{
unsigned int num = 0;

if (b == NULL)
return (0);

for (; *b; b++)
{
if (*b != '0' && *b != '1')
return (0);

num <<= 1;
num |= *b - '0';
}

return (num);
}
