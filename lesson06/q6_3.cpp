#include "../canvas/canvas.h"
#include "ColoredCircle.h"
#include "Circle.h"
#include "Rect.h"
#include "ColoredRect.h"
#include <iostream>

using namespace std;

int main() {
    canvas::show();

    Circle circle(100, 100, 50);
    circle.draw();
    cout << circle << endl;

    ColoredCircle coloredCircle(200, 200, 50, 255, 0, 0);
    coloredCircle.draw();
    cout << coloredCircle << endl;

    Rect rect(100, 100, 50, 50);
    rect.draw();
    cout << rect << endl;

    ColoredRect coloredRect(200, 200, 50, 50, 255, 0, 0);
    coloredRect.draw();
    cout << coloredRect << endl;

    canvas::waitForKey();
}

