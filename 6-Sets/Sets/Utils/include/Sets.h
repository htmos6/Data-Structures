#ifndef SETS_H
#define SETS_H

#include "Trees.h"
#define MAX_SIZE 50

template <class T>
class Sets
{
private:
	TreeNode<T>* leftNode = nullptr;
	TreeNode<T>* rightNode = nullptr;
	int sizeOfSet;
	int setMaxSize = MAX_SIZE;

public:
	T data;

	Sets();
	~Sets();
	virtual void insert(const T& item);
	virtual void remove();
	virtual void clear(void);
	virtual int size(void) const;
	virtual bool empty(void) const
	virtual int max_size(void) const;
};






#endif