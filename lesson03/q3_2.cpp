#include <string>
#include <iostream>
#include <cmath>
#include "Car2.h"

using namespace std;

int main(){
    string name;
    int width, length, height;
    double gas;

    cout << "車のデータを入力せよ。\n";
    cout << "名前 >>> "; cin >> name;
    cout << "車幅 >>> "; cin >> width;
    cout << "車長 >>> "; cin >> length;
    cout << "車高 >>> "; cin >> height;
    cout << "ガソリン量 >>> "; cin >> gas;

    Car2 myCar(name, width, length, height, gas);
    myCar.printSpec();

    while (true){
        cout << "現在地(" << myCar.getX() << ", " << myCar.getY() << ")\n";
        cout << "残り燃料: " << myCar.getFuel() << endl;
        cout << endl << "移動しますか？ (yes = 1 / no = 0) >>> ";
        int move;
        cin >> move;
        if (move == 0) break;
        double dx, dy;
        cout << "X方向の移動距離 >>> "; cin >> dx;
        cout << "Y方向の移動距離 >>> "; cin >> dy;
        if (!myCar.move(dx, dy)) {
            double dist = sqrt(dx * dx + dy * dy);
            double fuel;
            cout << "燃料が" << dist - myCar.getFuel() << "足りません！" << endl;
            cout << "いくら追加しますか？ >>> "; cin >> fuel;
            myCar.addFuel(fuel);
        }
    }
}