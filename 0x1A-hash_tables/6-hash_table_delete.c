#include "hash_tables.h"

/**
* hash_table_delete - delete the whole hash table
* @ht: the hash table
*
* Return: "void" Nothing
*/
void hash_table_delete(hash_table_t *ht)
{
	if (ht == NULL)
		return;

	if (ht->array)
	{
		unsigned long int i;
		hash_node_t *tmp;

		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				while (ht->array[i] != NULL)
				{
					tmp = ht->array[i];
					ht->array[i] = ht->array[i]->next;
					free(tmp->value);
					free(tmp->key);
					free(tmp);
				}
			}
		}
		free(ht->array);
	}

	free(ht);
}

