#ifndef RECT_H_
#define RECT_H_

#include "../canvas/canvas.h"
#include "Point.h"


class Rect {
protected:
    Point p;
    int width;
    int height;

public:
    Rect(int x, int y, int w, int h): p(Point(x,y)), width(w), height(h) {}

    inline int getX() const { return p.getX(); }
    inline int getY() const { return p.getY(); }
    inline int getWidth() const { return width; }
    inline int getHeight() const { return height; }
    inline void setX(int x) { p.setX(x); }
    inline void setY(int y) { p.setY(y); }
    inline void setWidth(int w) { width = w; }
    inline void setHeight(int h) { height = h; }

    void draw() const {
        canvas::setColor(0, 0, 0);
        canvas::drawRectangle(p.getX(), p.getY(), width, height);
    }

    std::string str() const {
        std::stringstream ss;
        ss << "Rect[LeftTop = " << p << ", width = " << width << ", height = " << height << "]";
        return ss.str();
    }

};

inline std::ostream& operator<<(std::ostream& s, const Rect& rect) {
    return s << rect.str();
}

#endif //RECT_H_
