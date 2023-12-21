#include "hash_tables.h"
/**
 * hash_djb2 - implementation of d djb2 algorithm
 * @str: string used to generate hash val
 *
 * Return: hash val
 **/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
