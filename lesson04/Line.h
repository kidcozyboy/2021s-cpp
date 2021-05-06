#ifndef LINE_H_
#define LINE_H_

#include "Point.h"

class Line {
private:
    Point p0;
    Point p1;

public:
    Line(Point *pp); // 要素2個の配列
    Line(Point p0, Point p1);
    Line(double x0, double y0, double x1, double y1);
    Line& operator=(const Line& line);
    double length(); // 長さ
    std::string toString(); // (x, y)-(z, p)

};


#endif // LINE_H_
