#ifndef COLORED_CIRCLE_H_
#define COLORED_CIRCLE_H_

#include "Color.h"
#include "Circle.h"


class ColoredCircle : public Circle {
    Color color;

public:
    ColoredCircle(int x, int y, int r, int red, int green, int blue):
            Circle(x, y, r), color(Color(red, green, blue)) {}

    Color getColor() const { return color; }
    void setColor(const Color &col) { color = col; }
    void setColor(int r, int g, int b) {
        color = Color(r, g, b);
    }

    void draw() const {
        canvas::setColor(color.getRed(), color.getGreen(), color.getBlue());
        canvas::drawCircle(p.getX(), p.getY(), radius);
    }

    std::string str() const {
        std::stringstream ss;
        ss << "ColoredCircle[Center = " << p << ", radius = " << radius << ", color = " << color << "]";
        return ss.str();
    }
};

inline std::ostream& operator<<(std::ostream& s, const ColoredCircle& coloredCircle) {
    return s << coloredCircle.str();
}



#endif //COLORED_CIRCLE_H_
