#ifndef LINE_H_
#define LINE_H_

#include "../canvas/canvas.h"
#include "Shape.h"

class Line: public Shape{
private:
    Point position;
    Point p1;

public:
    Line(int x0, int y0, int x1, int y1):
            position(Point(x0, y0)), p1(Point(x1, y1)) {}

    void draw() const override {
        canvas::setColor(0, 0, 0);
        canvas::drawLine(position.getX(), position.getY(),
                             p1.getX(), p1.getY());
    }

    void moveXY(const Point& point) override {
        position.setX(position.getX() + point.getX());
        position.setY(position.getY() + point.getY());

        p1.setX(p1.getX() + point.getX());
        p1.setY(p1.getY() + point.getY());
    }

    std::string str() const override {
        std::stringstream ss;
        ss << "Line[(x0, y0)=" << position << ", (x1, y1)=" << p1 << "]";
        return ss.str();
    }
};


#endif //LINE_H_
