#include "Car.h"
#include "../canvas/canvas.h"

using namespace canvas;

int main() {
    show();
    Car* mycar = new Car(200, 200, 100, 50, 10);
    mycar->draw();
    mycar->setXY(350, 200);
    mycar->draw();
    delete mycar;
    waitForKey();
}
