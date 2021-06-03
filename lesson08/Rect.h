#ifndef RECT_H_
#define RECT_H_

#include <sstream>
#include "Point.h"
#include "Shape.h"
#include "../canvas/canvas.h"

class Rect: public Shape {
protected:
    Point position;
    int width;
    int height;

public:
    Rect(int x = 0, int y = 0, int w = 0, int h = 0) : position(Point(x, y)), width(w), height(h) {}

    inline int getX() const {
        return position.getX();
    }

    inline int getY() const {
        return position.getY();
    }

    inline int getWidth() const {
        return width;
    }

    inline int getHeight() const {
        return height;
    }

    inline void setX(int x) {
        position.setX(x);
    }

    inline void setY(int y) {
        position.setY(y);
    }

    inline void setWidth(int w) {
        width = w;
    }

    inline void setHeight(int h) {
        height = h;
    }

    void draw() const override {
        canvas::setColor(0, 0, 0);
        canvas::drawRectangle(position.getX(), position.getY(), width, height);
    }

    void moveXY(const Point& point) override {
        setX(position.getX() + point.getX());
        setY(position.getY() + point.getY());
    }

    std::string str() const override {
        std::stringstream ss;
        ss << "Rect[center=" << position << ", width=" << width << ", height=" << height << "]";
        return ss.str();
    }
};

#endif //RECT_H_
