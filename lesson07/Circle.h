#ifndef CIRCLE_H_
#define CIRCLE_H_

#include <sstream>
#include <string>
#include "Point.h"
#include "../canvas/canvas.h"

class Circle {
protected:
    Point position;
    int radius;

public:
    Circle(int x=0, int y=0, int r=0): position(Point(x, y)), radius(r) {}

    virtual ~Circle() {}

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

    virtual void draw() const {
        canvas::setColor(0, 0, 0);
        canvas::drawCircle(position.getX(), position.getY(), radius);
    }

    std::string str() const {
        std::stringstream ss;
        ss << "Circle[center=" << position << ", radius=" << radius << "]";
        return ss.str();
    }
};

inline std::ostream &operator<<(std::ostream &s, const Circle &circle) {
    return s << circle.str();
}


#endif //CIRCLE_H_
