#include "../../include/linked_list.h"

namespace linked_list
{
    LinkedList::LinkedList() : head(nullptr)
    {
    }

    LinkedList::~LinkedList()
    {
        Node *current = head;
        while (current != nullptr)
        {
            Node *next = current->next;
            delete current;
            current = next;
        }
    }

    void LinkedList::insert(int value)
    {
        Node *new_node = new Node();
        new_node->data = value;
        new_node->next = nullptr;

        if (head == nullptr)
        {
            head = new_node;
        }
        else
        {
            Node *current = head;
            while (current->next != nullptr)
            {
                current = current->next;
            }
            current->next = new_node;
        }
    }

    void LinkedList::remove(int value)
    {
        Node *current = head;
        Node *previous = nullptr;

        while (current != nullptr)
        {
            if (current->data == value)
            {
                if (previous != nullptr)
                {
                    previous->next = current->next;
                }
                else
                {
                    head = current->next;
                }
                delete current;
                return;
            }
            previous = current;
            current = current->next;
        }
    }

    bool LinkedList::search(int value) const
    {
        Node *current = head;
        while (current != nullptr)
        {
            if (current->data == value)
            {
                return true;
            }
            current = current->next;
        }
        return false;
    }
}