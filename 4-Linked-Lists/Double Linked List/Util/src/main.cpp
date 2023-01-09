#include "DNODE.h"


int main()
{
	DNode<int> n1(1);
	DNode<int> n2(2);
	DNode<int> n3(3);
	DNode<int> n4(4);

	n1.insertNext(&n2);
	n2.insertNext(&n3);
	n3.insertNext(&n4);
	n1.displayList();

	n2.deleteNode();
	cout << "Data Value After n3: " << n3.nextNodeNext()->displayData() << endl;

	cout << "Data Value After Delete operation of n2 : ";
	n1.displayList();

	cout << "Data Value After Insert  operation of n2 before n4 : ";
	n4.insertPrev(&n2);
	n1.displayList();
}

