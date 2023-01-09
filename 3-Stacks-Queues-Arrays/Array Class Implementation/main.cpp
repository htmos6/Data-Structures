#include "main.h"

int main(){
        // Create objects for different template parameters
    Array<char> myCharArray; // Array with default char content
    myCharArray.displayArray();

    Array<int> myIntArray; // Array with default int content
    myIntArray.displayArray();

    Array<double> myDoubleArray; // Array with default double content
    myDoubleArray.displayArray();

    // Some modifications of the arrays
    myCharArray.setValue('x',10);
    myCharArray.setValue('y',15);
    myCharArray.displayArray();
    myCharArray.getValue(25);

    for(int i = 0; i < maxSize; i++)
        myDoubleArray.setValue(1/(double)(i+1),i);
    myDoubleArray.displayArray();
    return 0;
}
