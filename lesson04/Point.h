#ifndef POINT_H_
#define POINT_H_

#include <iostream>

class Point {
private:
    double x;
    double y;

public:
    Point(); // (0,0)に初期化
    Point(const Point& point);
    Point(double x, double y);
    Point& operator=(const Point& point);

    double getX();
    double getY();
    std::string toString(); // (x, y)

};


#endif // POINT_H_
