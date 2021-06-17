#include <iostream>
#include <exception>
#include <stdexcept>
#include <cmath>
#include "ColoredCar.h"

using namespace std;
using namespace canvas;

void check(Car* car) {
    Point* frontPos = car->getFront()->getPoint();
    Point* rearPos = car->getRear()->getPoint();
    Point* bodyPos = car->getBody()->getPos();

    Wheel* front = car->getFront();
    Wheel* rear = car->getRear();

    double distance = sqrt(pow(rearPos->getX() - frontPos->getX(), 2) + pow(rearPos->getY() - frontPos->getY(), 2));

    if (distance <= front->getRadius() + rear->getRadius()) throw logic_error("前輪と後輪が重なっています。");
    if (bodyPos->getY() > frontPos->getY() - front->getRadius()) throw logic_error("前輪が車体の上にはみ出しています。");
    if (bodyPos->getY() > rearPos->getY() - rear->getRadius()) throw logic_error("後輪が車体の上にはみ出しています。");
    if (bodyPos->getX() < 0 || 500 < bodyPos->getX() || bodyPos->getY() < 0 ||
        500 < frontPos->getY() + front->getRadius() || 500 < rearPos->getY() + rear->getRadius()) throw logic_error("車体がcanvasからはみ出ています。");
}

void carMoveXY(Car* car, int dx, int dy){
    Point* nowPos = car->getPos();
    car->setXY(nowPos->getX() + dx, nowPos->getY() + dy);
    check(car);
}

void rgbCheck(int red, int green, int blue) {
    if ( red < 0 || 255 < red) throw out_of_range("Redの値が不正。");
    if ( green < 0 || 255 < green) throw out_of_range("Greenの値が不正。");
    if ( blue < 0 || 255 < blue) throw out_of_range("Blueの値が不正。");
}

int main() {
    try {
        int red, green, blue;
        cout << "Redの数値 >>> "; cin >> red;
        cout << "Greenの数値 >>> "; cin >> green;
        cout << "Blueの数値 >>> "; cin >> blue;

        rgbCheck(red, green, blue);
        Color* color = new Color(red, green, blue);

        int xp, yp, length, height, radius;
        cout << "車のx座標 >>> "; cin >> xp;
        cout << "車のy座標 >>> "; cin >> yp;
        cout << "車体の横幅 >>> "; cin >> length;
        cout << "車体の高さ >>> "; cin >> height;
        cout << "車輪の半径 >>> "; cin >> radius;

        Car* myCar = new ColoredCar(xp, yp, length, height, radius, color);

        try {
            check(myCar);
            show();
            myCar->draw();

            int dx, dy;
            cout << "x方向の移動距離 >>> "; cin >> dx;
            cout << "y方向の移動距離 >>> "; cin >> dy;
            carMoveXY(myCar, dx, dy);

            myCar->draw();
            waitForKey();
        } catch (const exception& e) {
            cerr << e.what() << endl;
        }

        delete myCar;
    } catch (const exception& e) {
        cerr << e.what() << endl;
    }

}