#ifndef CIRCLE0_H_
#define CIRCLE0_H_

#include "../canvas/canvas.h"
#include "Point.h"


class Circle0 {
protected:
    Point p;
    int radius;

public:
    Circle0(int x, int y, int r): p(Point(x,y)), radius(r) {}

    inline int getX() const { return p.getX(); }
    inline int getY() const { return p.getY(); }
    inline int getRadius() const { return radius; }
    inline void setX(int x) { p.setX(x); }
    inline void setY(int y) { p.setY(y); }
    inline void setRadius(int r) { radius = r; }

    void draw() const {
        canvas::setColor(0, 0, 0);
        canvas::drawCircle(p.getX(), p.getY(), radius);
    }

    std::string str() const {
        std::stringstream ss;
        ss << "Circle[LeftTop = " << p << ", radius = " << radius << "]";
        return ss.str();
    }
};

#endif //CIRCLE0_H_
