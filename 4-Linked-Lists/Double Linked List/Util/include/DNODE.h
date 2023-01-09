#ifndef DNODE_H
#define DNODE_H

#include <iostream>
using namespace std;

template <class T>
class DNode 
{
	private:
		DNode<T>* next = nullptr;
		DNode<T>* prev = nullptr;
		T data;
	public:
		DNode(void);
		DNode(const T &item);
		virtual void insertNext(DNode<T>* p);
		virtual void insertPrev(DNode<T>* p);
		virtual DNode<T>* deleteNode(void);
		virtual DNode<T>* nextNodeNext(void) const; // return next node's next address area
		virtual DNode<T>* nextNodePrev(void) const; // return next node's previous address area
		virtual void displayList(void) const;
		virtual T displayData(void) const;
};



template <class T>
DNode<T>::DNode(void)
{
	next = this;
	prev = this;
}


template <class T>
DNode<T>::DNode(const T &item)
{
	next = this;
	prev = this;
	data = item;	
}


template <class T>
void DNode<T>::insertNext(DNode<T>* p)
{
	next->prev = p;
	p->next = next;
	p->prev = this;
	next = p;
}


template <class T>
void DNode<T>::insertPrev(DNode<T>* p)
{
	p->prev = prev;
	p->next = this;
	prev->next = p;
	prev = p;
}


template <class T>
DNode<T>* DNode<T>::deleteNode(void)
{
	DNode<T>* tempPtr = this;
	prev->next = next;
	next->prev = prev;
	return tempPtr;
}

template <class T>
DNode<T>* DNode<T>::nextNodeNext(void) const
{
	return next;
}


template <class T>
DNode<T>* DNode<T>::nextNodePrev(void) const
{
	return prev;
}


template <class T>
void DNode<T>::displayList(void) const
{
	DNode<T>* crrPTR = next;

	cout << this->data << " ";
	while (crrPTR != this)
	{
		cout << crrPTR->data << " ";
		crrPTR = crrPTR->next;
	}
	cout << "\n";
}


template <class T>
T DNode<T>::displayData(void) const
{
	return this->data;
}


#endif
