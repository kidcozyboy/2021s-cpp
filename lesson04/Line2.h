#ifndef LINE2_H_
#define LINE2_H_

#include "Point2.h"

class Line2 {
private:
    Point2 p0;
    Point2 p1;

public:
    Line2(Point2 *pp); // 要素2個の配列
    Line2(const Point2& p0, const Point2& p1);
    Line2(double x0, double y0, double x1, double y1);
    Line2& operator=(const Line2& line);
    double length(); // 長さ
    std::string toString(); // (x, y)-(z, p)

};


#endif // LINE2_H_
