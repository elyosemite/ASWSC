#include <iostream>

#include <linked_list.h>

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

    return 0;
}