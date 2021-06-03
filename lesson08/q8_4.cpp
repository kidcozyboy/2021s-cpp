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
    Triangle* t1 = new Triangle(50, 0, 0, 20, 100, 20);
    Circle* c1 = new Circle(50, 80, 50);
    Rect* r2 = new Rect(0, 0, 300, 200);
    Line* i0 = new Line(50, 160, 250, 160);

    Composite* compo0 = new Composite(0, 0);
    compo0->addComponent(t0);
    compo0->addComponent(c0);

    compo0->moveXY(Point(25, 20));

    Composite* compo1 = new Composite(0, 0);
    compo1->addComponent(t1);
    compo1->addComponent(c1);

    compo1->moveXY(Point(175, 20));

    Composite* compo2 = new Composite(0, 0);
    compo2->addComponent(r2);
    compo2->addComponent(i0);


    Composite compo;
    compo.addComponent(compo0);
    compo.addComponent(compo1);
    compo.addComponent(compo2);

    compo.moveXY(Point(100, 100));
    compo.draw();

    cout << compo << endl;

    waitForKey();
}
