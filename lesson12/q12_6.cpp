#include "Circle.h"
#include "ColoredCircle.h"
#include <vector>
#include <iostream>

using namespace std;
using namespace canvas;

int main() {
    int size;
    cout << "描画する個数を入力 >>> "; cin >> size;

    int height = 0;
    int width = 1;
    vector<Circle*> array;
    show();

    for (int i = 0; i < size; i++) {
        if (i >= 10 * (height + 1)) {
            height++;
            width = 1;
        }
        if (i % 2 == 0) {
            array.push_back(new Circle((width++)*40, 100 + (height * 40), 20));
        } else {
            array.push_back(new ColoredCircle((width++)*40, 100 + (height * 40), 20, 255, 0, 0));
        }
    }

    for (int i = 0; i < size; i++) {
        ColoredCircle* cc = dynamic_cast<ColoredCircle*>(array[i]);
        if (cc != NULL) cc->fill();
        else array[i]->draw();
    }
    waitForKey();
}
