#include <cmath>
#include <string>
#include <iostream>
#include "Car2.h"

using namespace std;

Car2::Car2(std::string n, int w, int l, int h, double f) {
    name = n;
    width = w;
    length = l;
    height = h;
    fuelLevel = f;
    xp = 0;
    yp = 0;
}

void Car2::printSpec() {
    cout << "名前: " << name << endl;
    cout << "車幅: " << width << "mm\n";
    cout << "車長: " << length << "mm\n";
    cout << "車高: " << height << "mm\n";
}

bool Car2::move(double dx, double dy) {
    double dist = sqrt(dx * dx + dy * dy);
    if (dist > fuelLevel){
        return false;
    }else{
         fuelLevel -= dist;
         xp += dx;
         yp += dy;
        return true;
    }
}

void Car2::addFuel(double fuel) {
    fuelLevel += fuel;
}
