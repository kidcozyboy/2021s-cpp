#ifndef SHAPE_H_
#define SHAPE_H_

#include <string>
#include "Point.h"

class Shape {
public:
    virtual ~Shape() = 0;
    virtual void draw() const = 0;
    virtual void moveXY(const Point& point) = 0;
    virtual std::string str() const = 0;
};

inline Shape::~Shape() {}

inline std::ostream& operator<<(std::ostream& s, const Shape& shape) {
    return s << shape.str();
}


#endif //SHAPE_H_
