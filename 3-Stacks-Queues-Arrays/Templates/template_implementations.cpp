#include <iostream>
using namespace std;

template <class T>
T GetMax(T num1, T num2) {
    return num1==num2 ? -1 : (num1 > num2 ? num1:num2);
}

int main()  {
    cout << GetMax<int>(7,7) << endl;
    cout << GetMax<int>(32,7) << endl;
    cout << GetMax<double>(7.33,7.533) << endl;
    return 0;
}
