#ifndef RECT_H_
#define RECT_H_

#include <sstream>
#include <string>
#include "Point.h"
#include "../canvas/canvas.h"

class Rect {
protected:
    Point position;
    int width, height;

public:
    Rect(int x=0, int y=0, int w=0, int h=0): position(Point(x, y)), width(w), height(h) {}

    virtual ~Rect() {}

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

    virtual void draw() const {
        canvas::setColor(0, 0, 0);
        canvas::drawRectangle(position.getX(), position.getY(), width, height);
    }

    virtual std::string str() const {
        std::stringstream ss;
        ss << "Rect[center=" << position << ", width=" << width << ", height=" << height << "]";
        return ss.str();
    }
};

inline std::ostream &operator<<(std::ostream &s, const Rect &rect) {
    return s << rect.str();
}


#endif //RECT_H_
