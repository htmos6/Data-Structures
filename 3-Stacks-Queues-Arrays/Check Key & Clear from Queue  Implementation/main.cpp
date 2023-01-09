#include "queue.h"

template <class T>
Queue<T> findQ(const int key, Queue<T> &q1) {
    T temp;
    Stack<int> s1,s2;

    while (!q1.Qempty()) {
        temp = q1.Qpop();
        if (temp != key) {
            s1.push(temp);
        }
    }
    while (!s1.stack_empty()) {
        temp = s1.pop();
        s2.push(temp);
    }
    q1.ClearQueue();
    while (!s2.stack_empty()) {
        temp = s2.pop();
        q1.Qpush(temp);
    }
    return q1;
}


int main()  {
    Queue<int> q1, q2;

    for (int i=1; i<15; i=i+2) {
        q1.Qpush(i);
    }
    q1.DisplayQueue();
    q2 = findQ<int> (6, q1);
    q2.DisplayQueue();

    return 0;
}
