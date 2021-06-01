#include "Circle.h"
#include "ColoredCircle.h"

using namespace std;
using namespace canvas;

int main() {
    const int size = 10;
    Circle* array[size];
    show();

    for (int i = 0; i < size; i++) {
        if (i % 2 == 0) {
            array[i] = new Circle((i+1)*40, 100, 20);
        } else {
            array[i] = new ColoredCircle((i+1)*40, 100, 20, 255, 0, 0);
        }
    }

    for (int i = 0; i < size; i++) {
        ColoredCircle* cc = dynamic_cast<ColoredCircle*>(array[i]);
        if (cc != NULL) cc->fill();
        else array[i]->draw();
    }
    waitForKey();
}
