#include "Shape.h"
#include "../canvas/canvas.h"
#include "Rect.h"
#include "Circle.h"
#include "Triangle.h"
#include "Line.h"
#include <iostream>

using namespace canvas;
using namespace std;

int main() {
    show();

    Shape* shapes[7] = {
            new Rect(100, 100, 300, 200),
            new Circle(180, 180, 20),
            new Circle(320, 180, 20),
            new Triangle(140, 160, 180, 140, 220, 160),
            new Triangle(280, 160, 320, 140, 360, 160),
            new Line(250, 200, 250, 250),
            new Line(150, 280, 350, 280)
    };

    for (int i = 0; i < 7; i++) {
        shapes[i]->draw();
    }

    for (int i = 0; i < 7; i++) {
        cout << *shapes[i] << endl;
    }

    for (int i = 0; i < 7; i++) {
        delete shapes[i];
    }

    waitForKey();
}
