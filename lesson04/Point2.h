#ifndef POINT2_H_
#define POINT2_H_

#include <iostream>

class Point2 {
private:
    int id;
    double x;
    double y;

public:
    static int counter;

    Point2(); // (0,0)に初期化
    Point2(const Point2& point2);
    Point2(double x, double y);
    Point2& operator=(const Point2& point2);

    double getX();
    double getY();
    int getId();
    std::string toString(); // (x, y)

};


#endif //Point2_H_
