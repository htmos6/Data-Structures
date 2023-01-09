#ifndef LINKED_LISTS_H
#define LINKED_LISTS_H
#include <iostream>
using namespace std;

template <class T>
class Node {
    private:
        T data;
        Node<T>* next = nullptr;
    public:
        Node(const T &item, Node<T>* nextptr = NULL);
        void InsertAfter(Node<T>* newptr);
        Node<T>* DeleteAfter(void);
        Node<T>* GetNextPtr(void) const;
        T GetData(void) const;
};

template <class T>
Node<T>::Node(const T &item, Node<T>* nextptr)
{
    data = item;
    next = nextptr;
}

template <class T>
void Node<T>::InsertAfter(Node<T>* newptr)
{
    newptr->next = next;
    next = newptr;
}

template <class T>
Node<T>* Node<T>::DeleteAfter(void)
{
    Node<T>* deletedPtr = next;

    if (next == NULL)
    {
        return NULL;
    }

    next = deletedPtr->next;
    deletedPtr->next = NULL;
    return deletedPtr;

}

template <class T>
Node<T>* Node<T>::GetNextPtr(void) const
{
    return next;
}

template <class T>
T Node<T>::GetData(void) const
{
    return data;
}

#endif
