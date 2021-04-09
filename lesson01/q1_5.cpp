#include <iostream>

using namespace std;

class Prefecture{
public:
    string name;
    int population;
    double area;

    Prefecture(string n, double a, int p){
        name = n;
        population = p;
        area = a;
    }

    string getName(){
        return name;
    }

    int getPopulation(){
        return population;
    }

    double getArea(){
        return area;
    }

    double getPopulationDensity(){
        return population / area;
    }

    void addPopulation(int num){
        population += num;
    }

    void print(){
        cout << "[" << getName() << "]" << endl
        << "  面積: " << getArea() << "km2" << endl
        << "  人口: " << getPopulation() << "人" << endl
        << "  人口密度: " << getPopulationDensity() << "人/km2" << endl;
    }

};

int main() {
    Prefecture tokyo("東京", 2190.90, 13506607);
    Prefecture kanagawa("神奈川", 2415.81, 9116252);

    tokyo.print();
    kanagawa.print();

    kanagawa.addPopulation(10000);
    kanagawa.print();

}
