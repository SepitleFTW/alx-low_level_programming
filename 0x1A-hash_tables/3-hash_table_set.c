#include "hash_tables.h"

/**
 * hash_table_set - adds item in hash table
 * @ht: the table in the hash
 * @key: key of the hash
 * @value: return val;ue
 * Return: 1 for pass else 0 for fail
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new, *tmp;

	if (!ht || !key || !(*key))
		return (0);
	new = malloc(sizeof(*new));
	if (!new)
		return (0);
	new->key = strdup((char *)key);
	new->value = strdup(value);
	new->next = NULL;
	i = key_index((unsigned char *)key, ht->size);
	if (!(ht->array[i]))
	{
		ht->array[i] = new;
	}
	else
	{
		/* check for update */
		tmp = ht->array[i];
		while (tmp && strcmp(tmp->key, new->key) != 0)
			tmp = tmp->next;
		if (tmp) /* its update */
		{
			free(tmp->value);
			tmp->value = new->value;
			free(new->key);
			free(new);
			return (1);
		}
		/* its a collision */
		tmp = ht->array[i];
		new->next = tmp;
		ht->array[i] = new;
	}

	return (1);
}
