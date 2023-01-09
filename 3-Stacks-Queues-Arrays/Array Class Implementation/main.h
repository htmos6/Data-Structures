#include <iostream>
using namespace std;

const int maxSize = 20;

/*
Example: Template Class
    want to implement a template Array class that can
     hold a pre-defined number of values of the template parameter type,
     set values at a certain position,
     get values from a certain position,
     display the array content.
*/

template <class T>
class Array {
    private:
       T arr[maxSize];
    public:
        void setValue(T val, int id);
        void displayArray(void) const;
        T getValue(int id) const;
        Array(void);
};


template <class T>
Array<T>::Array(void): arr() {};



template <class T>
void Array<T>::setValue(T val, int id) {
    if (id >=0 && id < maxSize) {
       arr[id] = val;
    }
    else {
       cerr << "Index is out of range !" << endl;
    }
}

template <class T>
T Array<T>::getValue(int id) const {
    if (id >=0 && id < maxSize) {
       return arr[id];
    }
    else {
       cerr << "Index is out of range !" << endl;
    }
}

template <class T>
void Array<T>::displayArray(void) const {
    for (int i=0; i < maxSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
