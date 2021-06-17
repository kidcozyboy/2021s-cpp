#include <iostream>
#include <exception>
#include <stdexcept>
#include <cmath>
#include "Car.h"

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

int main() {
    int xp, yp, length, height, radius;
    cout << "車のx座標 >>> "; cin >> xp;
    cout << "車のy座標 >>> "; cin >> yp;
    cout << "車体の横幅 >>> "; cin >> length;
    cout << "車体の高さ >>> "; cin >> height;
    cout << "車輪の半径 >>> "; cin >> radius;

    Car* myCar = new Car(xp, yp, length, height, radius);

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
}