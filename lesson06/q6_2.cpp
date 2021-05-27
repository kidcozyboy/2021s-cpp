#include "../canvas/canvas.h"
#include "ColoredCircle0.h"
#include "Circle0.h"
#include <iostream>

using namespace std;

int main() {
    canvas::show();

    Circle0 circle0(100, 100, 50);
    circle0.draw();
    cout << circle0.str() << endl;

    ColoredCircle0 coloredCircle0(200, 200, 50, 255, 0, 0);
    coloredCircle0.draw();
    cout << coloredCircle0.str() << endl;

    canvas::waitForKey();
}
