#include "ColoredCar.h"

using namespace canvas;

int main() {
    show();
    ColoredCar myCar(200, 200, 100, 50, 10, 255, 0, 0);
    myCar.draw();
    myCar.setXY(350, 200);
    myCar.draw();
    waitForKey();
}