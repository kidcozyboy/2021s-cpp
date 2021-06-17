#ifndef COLORED_CAR_H_
#define COLORED_CAR_H_

#include "Car.h"
#include "Color.h"
#include "Point.h"
#include "../canvas/canvas.h"

using namespace canvas;

class ColoredBody: public Body {
private:
    Color* color;

public:
    ColoredBody(Point* p, int l, int h, Color* c): Body(p, l, h), color(c) {}

    ~ColoredBody() { delete color; }

    void draw() override {
        canvas::setColor(color->getRed(), color->getGreen(), color->getBlue());
        canvas::drawRectangle(getPos()->getX(), getPos()->getY(), getLength(), getHeight());
        canvas::setColor(0, 0, 0);
    }
};

class ColoredCar: public Car {
public:
    ColoredCar(int x, int y, int l, int h, int r, int red, int green, int blue):
            Car(x, y, new ColoredBody(new Point(x - (l / 2), y - (h / 2)), l, h, new Color(red, green, blue)) ,l , h, r) {}

    ColoredCar(int x, int y, int l, int h, int r, Color* color):
            Car(x, y, new ColoredBody(new Point(x - (l / 2), y - (h / 2)), l, h, color), l , h, r) {}

};


#endif //COLORED_CAR_H_
