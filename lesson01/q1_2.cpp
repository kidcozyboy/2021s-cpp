#include <iostream>

using namespace std;

class Prefecture{
public:
    string name;
    int population;
    double area;

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
    Prefecture tokyo;
    Prefecture kanagawa;

    tokyo.name = "東京";
    tokyo.area = 2190.90;
    tokyo.population = 13506607;

    kanagawa.name = "神奈川";
    kanagawa.area = 2415.81;
    kanagawa.population = 9116252;

    tokyo.print();
    kanagawa.print();

    kanagawa.addPopulation(10000);
    kanagawa.print();

}
