#include "main.h"

/**
 * get_endianness - Function that checks the endianness of the system.
 *
 * Return: 0 if the system is big endian, 1 if the system is little endian.
 **/

int get_endianness(void)
{
unsigned int test_number = 1;
char *byte_pointer = (char *)&test_number;

return (*byte_pointer == 1);
}
