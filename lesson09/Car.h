#ifndef CAR_H_
#define CAR_H_

#include "Point.h"
#include "../canvas/canvas.h"
#include <iostream>


class Body {
private:
    Point* position;
    int length;
    int height;

public:
    Body(Point* p, int l, int h): position(p), length(l), height(h) {}

    virtual ~Body() { delete position; }

    int getLength() const { return length; }
    int getHeight() const { return height; }

    Point* getPos() const { return position; }

    void setXY(int x, int y) {
        position->setX(x - (length / 2));
        position->setY(y - (height / 2));
    }

    virtual void draw() {
        canvas::drawRectangle(position->getX(), position->getY(), length, height);
        std::cout << position->getX() << ", " << position->getY() << std::endl;
    }
};

class Wheel {
private:
    Point* position;
    int radius;

public:
    Wheel(Point* p, int r): position(p), radius(r) {}

    virtual ~Wheel() { delete position; }

    int getRadius() const { return radius; }

    void setXY(int x, int y, Body* body, bool isFront) {
        if (isFront) {
            position->setX(x - (body->getLength() / 2) + radius);
            position->setY(y + (body->getHeight() / 2));
        } else {
            position->setX(x + (body->getLength() / 2) - radius);
            position->setY(y + (body->getHeight() / 2));
        }
    }

    void draw() {
        canvas::drawCircle(position->getX(), position->getY(), radius);
        std::cout << position->getX() << ", " << position->getY() << std::endl;
    }

    void fill() {
        canvas::fillCircle(position->getX(), position->getY(), radius);
    }
};

class Car {
private:
    Point* position;
    Body* body;
    Wheel* front;
    Wheel* rear;

public:
    Car(int x, int y, int l, int h, int r):
        position(new Point(x, y)),
        body(new Body(new Point(x - (l / 2), y - (h / 2)), l, h)),
        front(new Wheel(new Point(x - (l / 2) + r, y + (h / 2)), r)),
        rear(new Wheel(new Point(x + (l / 2) - r, y + (h / 2)), r)) {}

    Car(int x, int y, Body* body, int l, int h, int r):
            position(new Point(x, y)),
            body(body),
            front(new Wheel(new Point(x - (l / 2) + r, y + (h / 2)), r)),
            rear(new Wheel(new Point(x + (l / 2) - r, y + (h / 2)), r)) {}

    virtual ~Car() {
        delete position;
        delete body;
        delete front;
        delete rear;
    }

    Body* getBody() const { return body; }
    Wheel* getFront() const { return front; }
    Wheel* getRear() const { return rear; }

    void setXY(int x, int y) {
        position->setX(x);
        position->setY(y);
        body->setXY(x, y);
        front->setXY(x, y, body, true);
        rear->setXY(x, y, body, false);
    }

    virtual void draw() const{
        std::cout << position->getX() << ", " << position->getY() << std::endl;
        body->draw();
        front->fill();
        rear->fill();
    }
};


#endif //CAR_H_
