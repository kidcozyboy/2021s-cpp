#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <sstream>
#include "Point.h"
#include "Shape.h"
#include "../canvas/canvas.h"

class Circle: public Shape{
protected:
    Point position;
    int radius;

public:
    Circle(int x=0, int y=0, int r=0): position(Point(x, y)), radius(r) {}

    inline int getX() const {
        return position.getX();
    }
    inline int getY() const {
        return position.getY();
    }
    inline int getRadius() const {
        return radius;
    }

    inline void setX(int x) {
        position.setX(x);
    }
    inline void setY(int y) {
        position.setY(y);
    }
    inline void setRadius(int r) {
        radius = r;
    }

    void draw() const override {
        canvas::setColor(0, 0, 0);
        canvas::drawCircle(position.getX(), position.getY(), radius);
    }

    void moveXY(const Point& point) override {
        setX(position.getX() + point.getX());
        setY(position.getY() + point.getY());
    }

    std::string str() const override {
        std::stringstream ss;
        ss << "Circle[center=" << position << ", radius=" << radius << "]";
        return ss.str();
    }
};

#endif //CIRCLE_H_
