#ifndef COLORED_CIRCLE0_H_
#define COLORED_CIRCLE0_H_

#include "Color.h"
#include "Circle0.h"


class ColoredCircle0 : public Circle0 {
    Color color;

public:
    ColoredCircle0(int x, int y, int r, int red, int green, int blue):
            Circle0(x, y, r), color(Color(red, green, blue)) {}

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
        ss << "ColoredCircle[LeftTop = " << p << ", radius = " << radius << ", color = " << color << "]";
        return ss.str();
    }
};


#endif //COLORED_CIRCLE0_H_
