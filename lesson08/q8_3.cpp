#include "Shape.h"
#include "Composite.h"
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

    Triangle* t0 = new Triangle(50, 0, 0, 20, 100, 20);
    Circle* c0 = new Circle(50, 80, 50);
    t0->moveXY(Point(25, 20));
    c0->moveXY(Point(25, 20));

    Triangle* t1 = new Triangle(50, 0, 0, 20, 100, 20);
    Circle* c1 = new Circle(50, 80, 50);
    t1->moveXY(Point(175, 20));
    c1->moveXY(Point(175, 20));

    Rect* r2 = new Rect(0, 0, 300, 200);
    Line* i0 = new Line(50, 160, 250, 160);

    Composite compo;
    compo.addComponent(t0);
    compo.addComponent(c0);
    compo.addComponent(t1);
    compo.addComponent(c1);
    compo.addComponent(r2);
    compo.addComponent(i0);

    compo.moveXY(Point(100, 100));
    compo.draw();

    cout << compo << endl;

    waitForKey();
}
