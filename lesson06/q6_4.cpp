#include "../canvas/canvas.h"
#include "ColoredRect.h"
#include "Rect.h"
#include <iostream>

using namespace std;

int main() {
    canvas::show();

    Rect rect(100, 100, 50, 50);
    rect.draw();
    cout << "rect=" << rect << ", &rect=" << &rect << endl;

    ColoredRect coloredRect(200, 200, 50, 50, 255, 0, 0);
    coloredRect.draw();
    cout << "coloredRect=" << coloredRect << ", coloredRect&=" << &coloredRect << endl;

    Rect rect2 = coloredRect;
    cout << "rect2=" << rect2 << ", &rect2=" << &rect2 << endl;

    Rect* rect3 = &coloredRect;
    cout << "rect3=" << rect3->str() << ", *rect3=" << rect3 << endl;

    rect2.setX(300);
    rect2.draw();

    rect3->setX(400);
    rect3->draw();

    canvas::waitForKey();
}

