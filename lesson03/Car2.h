#ifndef CAR_H_
#define CAR_H_

#include <string>

class Car2 {
private:
    std::string name;
    int width, length, height;
    double xp, yp;
    double fuelLevel;

public:
    Car2(std::string n, int w, int l, int h, double f);

    double getX(){
        return xp;
    }
    double getY(){
        return yp;
    }
    double getFuel(){
        return fuelLevel;
    }

    void printSpec();
    bool move(double dx, double dy);
    void addFuel(double fuel);
};


#endif //CAR_H_
