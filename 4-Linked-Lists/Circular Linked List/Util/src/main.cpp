#include "main.h"


int main()
{
	CNode<int> n1(1);
	CNode<int> n2(2);
	CNode<int> n3(3);
	CNode<int> n4(4);

	n1.insertAfter(&n2);
	n2.insertAfter(&n3);
	n3.insertAfter(&n4);
	n1.displayList();
}
