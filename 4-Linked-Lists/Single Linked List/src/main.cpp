#include <iostream>
#include "methods.h"
#include "linked_lists.h"
#include "random.h"

using namespace std;

int main()
{

    Node<int> *head = NULL, *currPtr;

    int i, key, count = 0;
    RandomNumber rnd;

    cout<<"First insert 5 random integers at the front of list"<<endl;
    int tempInt;
    for (i=0;i < 5;i++)
    {
        tempInt = int(1+rnd.Random(10));
        cout<<"Integer-"<<i+1<<" generated: "<<tempInt<<endl;
        InsertFront(tempInt, head);
    }

    // print the original list
    cout << "Content of the Linked-List: "<<endl;
    ShowList(head);
    cout << endl;

    cout<<"Now insert 5 random integers at the end of list"<<endl;
    for (i=0;i < 5;i++)
    {
        tempInt = int(1+rnd.Random(10));
        cout<<"Integer-"<<i+1<<" generated: "<<tempInt<<endl;
        InsertRear(tempInt, head);
    }

    // print the original list
    cout << "Content of the Linked-List: "<<endl;
    ShowList(head);
    cout << endl;

    cout<<"Delete the front element\n";
    DeleteFront(head);
    cout << "Content of the Linked-List: "<<endl;
    ShowList(head);
    cout << endl;
    return 0;
}
