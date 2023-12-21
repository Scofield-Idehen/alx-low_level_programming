#include "hash_tables.h"

/**
 * key_index - function that gives you d index of a key
 *
 * @key: Key to calculate
 * @size: Size of d array of d hash tab
 *
 * Return: Index of key
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
