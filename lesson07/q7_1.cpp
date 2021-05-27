#include "Car1.h"

using namespace canvas;

int main() {
    show();
    Car myCar(200, 200, 100, 50, 10);
    myCar.draw();
    waitForKey();
}