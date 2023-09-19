#include "main.h"

/**
 * the value of int is stored
 * @a: pointed to the first value
 * @b: pointer to the second value
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
