#include <cstring>

#include "../../include/hash_table.h"

namespace hash_table
{
    HashTable::HashTable(){}
    HashTable::~HashTable(){}

    item* HashTable::linear_search(item *items, size_t size, const char *key)
    {
        for (size_t index = 0; index < size; index++)
        {
            if (strcmp(items[index].key, key) == 0)
            {
                return &items[index];
            }
        }

        return nullptr;
    }
}