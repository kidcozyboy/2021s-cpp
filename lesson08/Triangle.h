#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "../canvas/canvas.h"
#include "Shape.h"

class Triangle: public Shape{
private:
    Point position;
    Point p1;
    Point p2;

public:
    Triangle(int x0, int y0, int x1, int y1, int x2, int y2):
            position(Point(x0, y0)), p1(Point(x1, y1)), p2(Point(x2, y2)) {}

    void draw() const override {
        canvas::setColor(0, 0, 0);
        canvas::drawTriangle(position.getX(), position.getY(),
                             p1.getX(), p1.getY(),
                             p2.getX(), p2.getY());
    }

    void moveXY(const Point& point) override {
        position.setX(position.getX() + point.getX());
        position.setY(position.getY() + point.getY());

        p1.setX(p1.getX() + point.getX());
        p1.setY(p1.getY() + point.getY());

        p2.setX(p2.getX() + point.getX());
        p2.setY(p2.getY() + point.getY());
    }

    std::string str() const override {
        std::stringstream ss;
        ss << "Triangle[(x0, y0)=" << position << ", (x1, y1)=" << p1 << ", (x2, y2)=" << p2 << "]";
        return ss.str();
    }
};


#endif //TRIANGLE_H_
