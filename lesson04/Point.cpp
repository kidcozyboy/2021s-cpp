#include <sstream>
#include "Point.h"

using namespace std;

Point::Point():
    x(0), y(0){
}

Point::Point(const Point &point):
    x(point.x), y(point.y){
}

Point::Point(double x, double y):
    x(x), y(y){
}

Point& Point::operator=(const Point &point) {
    if (this != &point){
        this->x = point.x;
        this->y = point.y;
    }
    return *this;
}

double Point::getX() {
    return x;
}

double Point::getY() {
    return y;
}

string Point::toString() {
    stringstream ss;
    ss << "(";
    ss << x;
    ss << ", ";
    ss << y;
    ss << ")";
    return ss.str();
}