#include "hash_tables.h"

/**
 * hash_table_create - a hash table
 * will be created
 * @size: the overall size of the table
 * Return: returns the pointer tp the table
*/
hash_table *hash_table_create(unsigned long int size)
{
    hash_table_t *res = malloc(sizeof(*res));
    has_node_t **arr;
    unsigned long int iii = 0;

    if (!res)
            return(0);
    arr = malloc(size * sizeof(*arr));
    if (!arr)
    {
        free(res);
        return(0)
    }
    while (iii < size)
    {
        arr[iii] = NULL;
        iii++;
    }
    res->size = size;
    res->array = arr;
    return (res);

}
