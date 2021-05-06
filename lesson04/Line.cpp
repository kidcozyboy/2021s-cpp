#include <cmath>
#include <sstream>
#include "Line.h"

using namespace std;

Line::Line(Point *pp):
    p0(pp[0]), p1(pp[1]){
}

Line::Line(Point p0, Point p1):
    p0(p0), p1(p1){
}

Line::Line(double x0, double y0, double x1, double y1):
    p0(Point(x0, y0)), p1(Point(x1, y1)){
}

Line& Line::operator=(const Line &line) {
    if (this != &line) {
        p0 = line.p0;
        p1 = line.p1;
    }
    return *this;
}

double Line::length() {
    return sqrt(pow((p1.getX() - p0.getX()), 2) + pow((p1.getY() - p0.getY()), 2));
}

string Line::toString() {
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