// TreesImplementation.cpp : Defines the entry point for the application.
//

#include "TreesImplementation.h"
using namespace std;




int main()
{
	TreeNode<char>* t;
	t = GetTreeNode('a', GetTreeNode('b'), GetTreeNode('e'));

	InOrder(t, visit);
	NewLine();

	PreOrder(t, visit);
	NewLine();

	PostOrder(t, visit);
	NewLine();
	return 0;
}
