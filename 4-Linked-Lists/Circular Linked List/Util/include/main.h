#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include "random.h"

using namespace std; 

template <class T>
class CNode 
{
	private:
		CNode<T>* next;
		T data;
	public:
		CNode(void); // Default constructors without no input
		CNode(const T &item); // Default constructor with given item

		virtual void insertAfter(CNode<T>* p);
		virtual CNode<T>* deleteAfter(void);
		virtual CNode<T>* nextNode(void) const;
		virtual void displayList(void) const;
};


template <class T>
CNode<T>::CNode(void)
{
	next = this;
}


template <class T>
CNode<T>::CNode(const T &item)
{
	next = this;
	data = item;
}


template <class T>
void CNode<T>::insertAfter(CNode<T>* p)
{
	p->next = next;
	next = p;
}


template <class T>
CNode<T>* CNode<T>::deleteAfter(void)
{
	CNode<T>* tempPtr;
	tempPtr = next;
	if (next == this)
	{
		return NULL;
	}
	else
	{
		next = tempPtr->next;
		return tempPtr;
	}
}


template <class T>
CNode<T>* CNode<T>::nextNode(void) const
{
	if (next == this)
	{
		return const_cast<CNode<T>*>(this); // Empty Circular Linked List
	}
	else
	{
		return next;
	}
}


template <class T>
void CNode<T>::displayList(void) const
{
	CNode<T>* crrPTR = next;

	cout << this->data << " ";
	while (crrPTR != this)
	{	
		cout << crrPTR->data << " ";
		crrPTR = crrPTR->next;
	}
	cout << "\n";
}
#endif
