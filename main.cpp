#include <iostream>

#include <linked_list.h>
#include <hash_table.h>

using namespace std;

int main() {
    std::cout << "===== Algorithm Set for Worldwide Science Computer (ASWSC) =====" << std::endl;
    
    // Utilizar o namespace explicitamente
    linked_list::LinkedList list;

    // Inserindo elementos
    list.insert(10);
    list.insert(20);
    list.insert(30);

    // Buscando um elemento existente
    std::cout << "Search 20: " 
              << (list.search(20) ? "Found" : "Not Found") 
              << std::endl;

    // Removendo um elemento
    list.remove(20);
    std::cout << "Search 20 after removal: " 
              << (list.search(20) ? "Found" : "Not Found") 
              << std::endl;

    // Inserindo outro elemento para novo teste
    list.insert(40);
    std::cout << "Search 40: " 
              << (list.search(40) ? "Found" : "Not Found") 
              << std::endl;

    std::cout << "\n===== hash table =====\n\n" << std::endl;
    hash_table::HashTable hashTable;
    hash_table::item items[7] =
    {
        { "foo",  10 },
        { "bar",  42 },
        { "bazz", 36 },
        { "buzz", 7 },
        { "bob",  12 },
        { "jane", 100 },
        { "x",    200 }
    };
    size_t num_items = sizeof(items) / sizeof(hash_table::item);

    hash_table::item * found = hashTable.linear_search(items, num_items, "bob");
    if (!found) {
        std::cout << "===== hash table did not find element =====" << std::endl;
    }

    std::cout << "linear_search: value of 'bob' is: " << found->value << std::endl;

    return 0;
}