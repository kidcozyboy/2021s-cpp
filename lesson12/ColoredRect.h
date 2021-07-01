#ifndef COLORED_RECT_H_
#define COLORED_RECT_H_

#include "Color.h"
#include "Rect.h"

class ColoredRect: public Rect {
    Color color;

public:
    ColoredRect(int x, int y, int w, int h, int red, int green, int blue): Rect(x, y, w, h), color(Color(red, green, blue)) {}

    Color getColor() const { return color; }

    void setColor(const Color &c) {color = c; }
    void setColor(int r, int g, int b) { color = Color(r, g, b); }

    void draw() const override {
        canvas::setColor(color.getRed(), color.getGreen(), color.getBlue());
        canvas::drawRectangle(position.getX(), position.getY(), width, height);
    }

    void fill() const {
        canvas::setColor(color.getRed(), color.getGreen(), color.getBlue());
        canvas::fillRectangle(position.getX(), position.getY(), width, height);
    };

    std::string str() const {
        std::stringstream ss;
        ss << "ColoredRect[center=" << position << ", width=" << width << ", height=" << height << ", color=" << color << "]";
        return ss.str();
    }
};

inline std::ostream &operator<<(std::ostream &s, const ColoredRect &coloredRect) {
    return s << coloredRect.str();
}

#endif //COLORED_RECT_H_
