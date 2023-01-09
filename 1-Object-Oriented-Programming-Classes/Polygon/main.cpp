#include <iostream>
#include "poly.h"
using namespace std;


int main() {
    Rectangle r1(5,8);
    cout << r1.CalcArea();

    Triangle t1(9,6);
    cout << "\n" << t1.CalcArea() << endl;

    Polygon *p1 = nullptr;
    p1 = &r1;
    cout << "\n" << p1 ->CalcArea();

    return 0;
}
