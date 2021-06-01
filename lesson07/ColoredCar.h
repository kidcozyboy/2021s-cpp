#ifndef COLORED_CAR_H_
#define COLORED_CAR_H_

#include "Car.h"
#include "Color.h"
#include "Point.h"
#include "../canvas/canvas.h"

using namespace canvas;

class ColoredBody: public Body {
private:
    Color color;

public:
    ColoredBody(Point p, int l, int h, Color c): Body(p, l, h), color(c) {}

    Color getColor() const { return color; }

    void draw() override {
        canvas::setColor(color.getRed(), color.getGreen(), color.getBlue());
        canvas::drawRectangle(getPos().getX(), getPos().getY(), getLength(), getHeight());
        canvas::setColor(0, 0, 0);
    }
};

class ColoredCar: public Car {
private:
    ColoredBody coloredBody;

public:
    ColoredCar(int x, int y, int l, int h, int r, int red, int green, int blue):
            Car(x, y, l, h, r),
            coloredBody(ColoredBody(Point(x - (l / 2), y - (h / 2)), l, h, Color(red, green, blue))) {}

    void setXY(int x, int y) override {
        Car::setXY(x, y);
        coloredBody = ColoredBody(Point(x - (getBody().getLength() / 2), y - (getBody().getHeight() / 2)), getBody().getLength(), getBody().getHeight(), Color(coloredBody.getColor().getRed(), coloredBody.getColor().getGreen(), coloredBody.getColor().getBlue()));
    }

    void draw() override {
        coloredBody.draw();
        getFront().fill();
        getRear().fill();
    }
};


#endif //COLORED_CAR_H_
