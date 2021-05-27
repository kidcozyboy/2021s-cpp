#include "Car2.h"

using namespace canvas;

int main() {
    show();
    Car myCar(200, 200, 100, 50, 10);
    myCar.draw();
    myCar.setXY(350, 200);
    myCar.draw();
    waitForKey();
}