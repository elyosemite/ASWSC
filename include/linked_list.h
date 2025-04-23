#ifndef LINKED_LIST_H
#define LINKED_LIST_H

namespace linked_list
{
    struct Node
    {
        int data;
        Node *next;
    };

    class LinkedList
    {
    public:
        LinkedList();
        ~LinkedList();

        void insert(int value);
        void remove(int value);
        bool search(int value) const;

    private:
        Node *head;
    };
}

#endif