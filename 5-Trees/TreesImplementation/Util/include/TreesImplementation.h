#include <iostream>
using namespace std;

template <class T>
class TreeNode
{
	private:
		TreeNode<T>* Left;
		TreeNode<T>* Right;

	public:
		T data;
		TreeNode(const T& item, TreeNode<T>* lptr = nullptr, TreeNode<T>* rptr = nullptr);
		virtual TreeNode<T>* LeftNode(void) const;
		virtual TreeNode<T>* RightNode(void) const;
};

template <class T>
TreeNode<T>::TreeNode(const T& item, TreeNode<T>* lptr, TreeNode<T>* rptr)
{
	Left = lptr;
	Right = rptr;
	data = item;
}


template <class T>
TreeNode<T>* TreeNode<T>::LeftNode(void) const 
{
	return Left;
}


template <class T>
TreeNode<T>* TreeNode<T>::RightNode(void) const
{
	return Right;
}


// Allocate memory dynamically to create tree node
template <class T>
TreeNode<T>* GetTreeNode(const T& item, TreeNode<T>* lptr = nullptr, TreeNode<T>* rptr = nullptr)
{
	TreeNode<T>* ptr = nullptr;
	ptr = new TreeNode<T>(item, lptr, rptr);

	if (ptr == NULL)
	{
		cout << "Unable to deallocate memory !\n";
		exit(1);
	}

	return ptr;
}


// Delete dynamically allocated memory to free memory
template <class T>
void DeleteTreeNode(TreeNode<T>* p)
{
	delete p;
}


// In order traversal with trees
template <class T>
void InOrder(TreeNode<T>* t, void visit(T &item))
{
	if (t != NULL)
	{
		InOrder(t->LeftNode(), visit);
		visit(t->data);
		InOrder(t->RightNode(), visit);
	}
}


// Pre order traversal with trees
template <class T>
void PreOrder(TreeNode<T>* t, void visit(T& item))
{
	if (t != NULL)
	{
		visit(t->data);
		PreOrder(t->LeftNode(), visit);
		PreOrder(t->RightNode(), visit);
	}
}


// Post order traversal with trees
template <class T>
void PostOrder(TreeNode<T>* t, void visit(T& item))
{
	if (t != NULL)
	{
		PostOrder(t->LeftNode(), visit);
		PostOrder(t->RightNode(), visit);
		visit(t->data);

	}
}

template <class T>
void visit(T& item)
{
	cout << item << " ";
}

void NewLine(void)
{
	cout << "\n";
}



//
//
//Implement Depth, CountLeaf, functions
//
//

template <class T>
int minLeafDepth(TreeNode<T>* t)
{
	int min_left, min_right, lev;

	if (t == NULL)
	{
		return -1;
	}
	else if (t->LeftNode() == NULL && t->RightNode() == NULL)
	{
		lev = 0;
	}
	else
	{
		if (t->LeftNode() != NULL)
		{
			min_left = minLeafDepth(t->LeftNode());
		}
		else 
		{
			min_left = INT_MAX;
		}

		if (t->RightNode() != NULL)
		{
			min_right = minLeafDepth(t->RightNode());
		}
		else
		{
			min_right = INT_MAX;
		}


	}




}