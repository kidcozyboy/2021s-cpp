#include "Rect.h"
#include "ColoredRect.h"
#include <vector>
#include <iostream>

using namespace std;
using namespace canvas;

int main() {
    int size;
    cout << "描画する個数を入力 >>> "; cin >> size;

    int height = 0;
    int width = 1;
    vector<Rect*> array;
    show();

    for (int i = 0; i < size; i++) {
        if (i >= 10 * (height + 1)) {
            height++;
            width = 1;
        }
        if (i % 2 == 0) {
            array.push_back(new Rect((width++)*40, 100 + (height * 30), 30, 20));
        } else {
            array.push_back(new ColoredRect((width++)*40, 100 + (height * 30), 30, 20, 255, 0, 0));
        }
    }

    for (Rect* rect : array) {
        rect->draw();
    }
    waitForKey();
}
