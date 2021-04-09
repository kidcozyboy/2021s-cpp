#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

class Complex{
public:
    double real; // 実数部
    double imag; // 虚数部

    double getReal(){
        return real;
    }

    double getImag(){
        return imag;
    }

    double getModulus(){
        return sqrt((pow(real, 2) + pow(imag, 2)));
    }

    void add(double r, double i){
        real += r;
        imag += i;
    }

    void mult(double r, double i){
        double real2 = (real * r) - (i * imag);
        double imag2 = (imag * r) + (real * i);
        real = real2;
        imag = imag2;
    }

    string toString(){
        stringstream ss;
        if (getImag() < 0) ss << getReal() << getImag() << "i";
        else ss << getReal() << "+" << getImag() << "i";

        return ss.str();
    }

    void print(){
        cout << toString() << endl;
    }

};

int main() {
    Complex complex;
    complex.real = 3;
    complex.imag = 4;

    cout << "初期値: ";
    complex.print();
    cout << "絶対値: " << complex.getModulus() << endl;

    complex.add(2, -5);
    cout << "(2-5i) を加算: ";
    complex.print();

    complex.mult(6, -2);
    cout << "上の結果に (6-2i) を乗算: ";
    complex.print();
}
