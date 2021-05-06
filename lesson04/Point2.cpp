#include <sstream>
#include "Point2.h"

using namespace std;

Point2::Point2() {
    id = counter++;
    x = 0;
    y = 0;
    cout << "Point2デフォ: " << Point2::counter << endl;
    }

Point2::Point2(const Point2 &point) {
    id = counter++;
    x = point.x;
    y = point.y;
    cout << "Point2コピー: " << Point2::counter << endl;
}

Point2::Point2(double x, double y) {
    id = counter++;
    this -> x = x;
    this -> y = y;
    cout << "Point2引数付き: " << Point2::counter << endl;
}

Point2& Point2::operator=(const Point2 &point) {
    if (this != &point){
        this->x = point.x;
        this->y = point.y;
    }
    cout << "counter4: " << Point2::counter << endl;
    return *this;
}

double Point2::getX() {
    return x;
}

double Point2::getY() {
    return y;
}

int Point2::getId() {
    return id;
}

string Point2::toString() {
    stringstream ss;
    ss << "id: " << id << ", ";
    ss << "(";
    ss << x;
    ss << ", ";
    ss << y;
    ss << ")";
    return ss.str();
}