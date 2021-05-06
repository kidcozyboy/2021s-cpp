#include <iostream>
#include "Point.h"
#include "Line.h"

using namespace std;

int main() {
    Point p0(1, 2);
    Point p1(3, 1);
    Line l1(p0, p1);

    cout << l1.toString() << ", 長さ: " << l1.length() << endl;

    Line l2(1, 2, 3, 4);

    cout << l2.toString() << ", 長さ: " << l2.length() << endl;

    Point p3 = p1;
    Point p4;
    p4 = p0;
    Line l3(p3, p4);

    cout << l3.toString() << ", 長さ: " << l3.length() << endl;
}