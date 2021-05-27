#ifndef POINT_H_
#define POINT_H_

#include <sstream>
#include <string>

class Point {
    int x;
    int y;

public:
    Point(int xp=0, int yp=0): x(xp), y(yp) {}

    std::string str() const {
        std::stringstream ss;
        ss << '(' << x << ", " << y << ')';
        return ss.str();
    }

    inline int getX() const { return x; }
    inline int getY() const { return y; }
    inline void setX(int xp) { x = xp; }
    inline void setY(int yp) { y = yp; }
};

inline std::ostream& operator<<(std::ostream& s, const Point & point) {
    return s << point.str();
}

#endif //POINT_H_
