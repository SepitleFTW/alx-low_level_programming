#include "hash_tables.h"

/**
 * hash_djb2 - implementation of the djb2 code
 * @str: the string value of the hash
 *
 * Return: reutn the value of the has
 */
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
