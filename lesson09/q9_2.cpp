#include "ColoredCar.h"
#include "../canvas/canvas.h"

using namespace canvas;

int main() {
    show();
    ColoredCar* mycar = new ColoredCar(200, 200, 100, 50, 10, 255, 0, 0);
    mycar->draw();
    mycar->setXY(350, 200);
    mycar->draw();
    delete mycar;
    waitForKey();
}
