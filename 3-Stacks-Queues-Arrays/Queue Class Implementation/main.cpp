#include "queue.h"

int main()  {

    Queue<int> q1;
    for (int i=1; i<15; i=i+2) {
        q1.Qpush(i);
    }
    q1.DisplayQueue();
    cout << "Removed Element: " << q1.Qpop() << endl;
    cout << "Removed Element: " << q1.Qpop() << endl;
    q1.DisplayQueue();
    cout << "Element at the back: " << q1.Back() << endl;
    cout << "Element at the front: " << q1.Front() << endl;

    return 0;
}
