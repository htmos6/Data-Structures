#include "main.h"
const int MAX_SIZE = 50;

template <class T>
class Queue {
    private:
        T Qlist[MAX_SIZE];
        int front, back, counter;
    public:
        Queue():front(0), back(0), counter(0) {};
        void Qpush(T element);
        T Qpop();
        T Front();
        T Back();
        int Qlength();
        bool Qempty();
        bool Qfull();
        void ClearQueue();
        void DisplayQueue();
};

template <class T>
void Queue<T>::Qpush(T element) {
    if (counter == MAX_SIZE) {
        cerr << "Queue is Full !" << endl;
        exit(1);
    }
    counter ++;
    Qlist[back] = element;
    back = (back+1) % MAX_SIZE;
}

template <class T>
T Queue<T>::Qpop() {
    if (counter == 0) {
        cerr << "Empty Queue !" << endl;
        exit(1);
    }
    T temp = Qlist[front];
    counter -= 1;
    front = (front + 1) % MAX_SIZE;
    return temp;
}

template <class T>
int Queue<T>::Qlength() {
    return counter;
}

template <class T>
T Queue<T>::Front() {
    if (counter == 0) {
        cerr << "Empty Queue !" << endl;
        exit(1);
    }
    return Qlist[front];
}

template <class T>
T Queue<T>::Back() {
    if (counter == 0) {
        cerr << "Empty Queue !" << endl;
        exit(1);
    }
    return Qlist[back-1];
}

template <class T>
bool Queue<T>::Qempty() {
    return (counter == 0 ? 1:0);
}

template <class T>
bool Queue<T>::Qfull() {
    return (counter == MAX_SIZE ? 1:0);
}

template <class T>
void Queue<T>::ClearQueue() {
    front =0;
    back = 0;
    counter = 0;
}

template <class T>
void Queue<T>::DisplayQueue() {
    for (int i=front; i < front + counter; i++) {
        cout << Qlist[i] << " ";
    }
    cout << endl;
}
