#ifndef COMPOSITE_H_
#define COMPOSITE_H_

#include "Shape.h"

class Composite: public Shape{
private:
    Shape** components;
    Point p;
    int size;
    int next;

public:
    Composite(int x = 0, int y = 0):
        components(new Shape*[10]), p(Point(x, y)), size(10), next(0) {}

    ~Composite() override {
        for (int i = 0; i < next; i++) {
            delete components[i];
        }

        delete[] components;
    }

    void addComponent(Shape* shape);
    void moveXY(const Point& point) override;
    void draw() const override;
    std::string str() const override;
};


#endif //COMPOSITE_H_
