#include <iostream>
#include "Point2.h"
#include "Line2.h"

using namespace std;

int Point2::counter = 0;

int main() {
    cout << Point2::counter << endl;
    Point2 p0(1, 2); // 1
    Point2 p1(3, 1); // 2

    cout << Point2::counter << endl;

    Line2 l1(p0, p1); // 3, 4
    cout << Point2::counter << endl;
    cout << l1.toString() << ", 長さ: " << l1.length() << endl;

    Line2 l2(1, 2, 3, 4); // 5, 6
    cout << l2.toString() << ", 長さ: " << l2.length() << endl;

    Point2 p3 = p1; // 7
    Point2 p4; // 8

    Line2 l3(p3, p4); // 9, 10
    cout << l3.toString() << ", 長さ: " << l3.length() << endl;

    cout << Point2::counter << endl;
}