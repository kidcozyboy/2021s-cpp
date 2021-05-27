#ifndef COLORED_RECT_H_
#define COLORED_RECT_H_

#include "Color.h"
#include "Rect.h"


class ColoredRect : public Rect {
    Color color;

public:
    ColoredRect(int x, int y, int w, int h, int red, int green, int blue):
            Rect(x, y, w, h), color(Color(red, green, blue)) {}

    Color getColor() const { return color; }
    void setColor(const Color &col) { color = col; }
    void setColor(int r, int g, int b) {
        color = Color(r, g, b);
    }

    void draw() const {
        canvas::setColor(color.getRed(), color.getGreen(), color.getBlue());
        canvas::drawRectangle(p.getX(), p.getY(), width, height);
    }

    std::string str() const {
        std::stringstream ss;
        ss << "ColoredRectangle[LeftTop = " << p << ", width = " << width << ", height = " << height << ", color = " << color << "]";
        return ss.str();
    }
};

inline std::ostream& operator<<(std::ostream& s, const ColoredRect& coloredRect) {
    return s << coloredRect.str();
}

#endif //COLORED_RECT_H_
