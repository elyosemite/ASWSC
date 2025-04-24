#ifndef HASH_TABLE_H
#define HASH_TABLE_H

namespace hash_table
{
    typedef struct
    {
        const char *key;
        int value;
    } item;

    class HashTable
    {
    public:
        HashTable();
        ~HashTable();

        item* linear_search(item *items, size_t size, const char *key);
    };
}

#endif