#include "linked_lists.h"

template <class T>
Node<T>* NewNode(const T &item, Node<T>* ptrNext) // Send data/next sections of the node.
{
    Node<T>* newNode = new Node<T> (item, ptrNext);

    if (newNode == NULL)
    {
        cerr << "Unsuccessful memory allocation.";
        exit(1);
    }

    return newNode;
}

template <class T>
void InsertFront(const T &item, Node<T>* &head) // Give head adress that you want to insert front of it.
{
    head = NewNode(item, head);
}

template <class T>
void InsertRear(const T &item, Node<T>* &head)
{
    Node<T>* currentPtr = head;
    Node<T>* nodeCurrentlyCreated;
    Node<T>* nullp = nullptr;

    if (currentPtr == NULL)
    {
        InsertFront(item, head);
    }

    else
    {
        while (currentPtr -> GetNextPtr() != NULL)
        {
            currentPtr = currentPtr -> GetNextPtr();
        }
        nodeCurrentlyCreated = NewNode(item, head);
        currentPtr -> InsertAfter(nodeCurrentlyCreated);
    }

}

template <class T>
void DeleteFront(Node<T>* &head)
{
    Node<T>* deleteThisNode = head;

    if (head != NULL)
    {
        head = head -> GetNextPtr();
        delete deleteThisNode;  // Why do we delete this original node ? It is not a dynamically created object.
    }
}

template <class T>
void ShowList(Node<T>* &head)
{
    int pos = 0;
    Node<T>* currentNode = head;

    while (currentNode != NULL)
    {
        cout << "Current list position: " << pos << "- data: " << currentNode -> GetData() << endl;
        pos += 1;
        currentNode = currentNode -> GetNextPtr();
    }
}
