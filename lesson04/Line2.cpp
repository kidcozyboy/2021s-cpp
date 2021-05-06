#include <cmath>
#include <sstream>
#include "Line2.h"

using namespace std;

Line2::Line2(Point2 *pp):
    p0(pp[0]), p1(pp[1]){
}

Line2::Line2(const Point2& p0, const Point2& p1):
    p0(p0), p1(p1){
    cout << "Line2コピー" << endl;
}

Line2::Line2(double x0, double y0, double x1, double y1):
    p0(Point2(x0, y0)), p1(Point2(x1, y1)){
    cout << "Line2引数付き" << endl;
}

Line2& Line2::operator=(const Line2 &line) {
    if (this != &line) {
        p0 = line.p0;
        p1 = line.p1;
    }
    return *this;
}

double Line2::length() {
    return sqrt(pow((p1.getX() - p0.getX()), 2) + pow((p1.getY() - p0.getY()), 2));
}

string Line2::toString() {
    stringstream ss;
    ss << "(";
    ss << p0.getX();
    ss << ", ";
    ss << p0.getY();
    ss << ") - (";
    ss << p1.getX();
    ss << ", ";
    ss << p1.getY();
    ss << ")";
    return ss.str();
}