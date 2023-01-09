#include <iostream>
#include <stack>
#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;

const int size = 6;

template <class T>
class Stack {
    private:
        T values_to_stack[size];
        int top = -1; // lets initialize your top index at -1 to indicate its fully empty;
    public:
        Stack();
        T pop();
        T peek() const; // Returns top element of the element without modifying stack
        void push(const T &num);
        void clear_stack();
        int stack_empty() const;
        int stack_full() const;
        void display_stack() const;
};


template <class T>
Stack<T>::Stack() {
    top = -1;
}

template <class T>
T Stack<T>::pop() {
    T temp;
    if (top == -1) {
        cerr << "Stack is Empty!" << endl;
        exit(1);
    }
    else {
        temp = values_to_stack[top];
        top -= 1;
        return temp;
    }
};

template <class T>
T Stack<T>::peek() const {
    if (top == -1) {
        cerr << "Stack is Empty!" << endl;
        exit(1);
    }
    else {
        return values_to_stack[top];
    }
};

template <class T>
void Stack<T>::push(const T &num) {
    if (top < size - 1) {
        top += 1;
        values_to_stack[top] = num;
    }
    else {
        cerr << "Stack Size is Full";
        exit(1);
    }
};

template <class T>
void Stack<T>::clear_stack() {
    top = -1;
};

template <class T>
int Stack<T>::stack_empty() const {
    return (top == -1 ? 1:0);
};

template <class T>
int Stack<T>::stack_full() const {
    return (top == size-1 ? 1:0);
};

template <class T>
void Stack<T>::display_stack() const {
    if (top != -1) {
        for (int i=top; i>=0; i--) {
            cout << values_to_stack[i] << endl;
        }
    }
    else {
        cerr << "Empty Stack!";
        exit(1);
    }
}
