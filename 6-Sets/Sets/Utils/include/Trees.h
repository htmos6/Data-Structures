#ifndef TREES_H
#define TREES_H

#include <iostream>

template <class T>
class TreeNode {

private:
	TreeNode<T>* left = nullptr;
	TreeNode<T>* right = nullptr;

public:
	T data;

	TreeNode(const T& item, TreeNode<T>* leftPtr = nullptr, TreeNode<T>* rightPtr = nullptr);
	virtual TreeNode<T>* LeftNode(void) const;
	virtual TreeNode<T>* RightNode(void) const;
};


template <class T>
TreeNode<T>::TreeNode(const T& item, TreeNode<T>* leftPtr = nullptr, TreeNode<T>* rightPtr = nullptr)
{
	left = leftPtr;
	right = rightPtr;
	data = item;
}

template <class T>
TreeNode<T>* TreeNode<T>::LeftNode(void) const
{
	return left;
}

template <class T>
TreeNode<T>* TreeNode<T>::RightNode(void) const
{
	return right;
}

template <class T>
void DeleteTreeNode(TreeNode<T>* nodeTree) // If you define it as a constant you cannot modify it. Pass by value is used. Pointer will deleted when function terminates.
{
	delete nodeTree;
}

template <class T>
TreeNode<T>* GetTreeNode(const T& item, TreeNode<T>* leftPtr = nullptr, TreeNode<T>* rightPtr = nullptr)
{
	TreeNode<T>* dynamicNode = new TreeNode<T>(item, leftPtr, rightPtr);

	if (dynamicNode != NULL)
	{
		return dynamicNode;
	}
	else
	{
		cout << "Unable to deallocate memory !\n";
		exit(1);
	}
}

#endif