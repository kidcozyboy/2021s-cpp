#include "Composite.h"

void Composite::addComponent(Shape *shape) {
    if (next == size) {
        size *= 2;
        Shape** tmp = new Shape*[size];

        for (int i = 0; i < next; i++) {
            tmp[i] = components[i];
        }

        delete[] components;
        components = tmp;
    }

    components[next++] = shape;
}

void Composite::moveXY(const Point &point) {
    p.setX(p.getX() + point.getX());
    p.setY(p.getY() + point.getY());
    for (int i = 0; i < next; i++) {
        components[i]->moveXY(point);
    }
}

void Composite::draw() const {
    for (int i = 0; i < next; i++) {
        components[i]->draw();
    }
}

std::string Composite::str() const {
    std::stringstream ss;
    ss << "Composite[pos=" << p << std::endl;
    for (int i = 0; i < next; i++) {
        ss << components[i]->str() << std::endl;
    }
    ss << "]";
    return ss.str();
}
