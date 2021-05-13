#include "Complex1.h"
#include <cmath>
#include <sstream>

using namespace std;

Complex1::Complex1(double real, double imag):
        real(real), imag(imag) {}

Complex1::Complex1(const Complex1 &orig):
        real(orig.real), imag(orig.imag) {}

Complex1& Complex1::operator=(const Complex1 &arg) {
    real = arg.real;
    imag = arg.imag;

    return *this;
}

Complex1 Complex1::operator+(const Complex1 &arg) {
    Complex1 temp(*this);

    temp.real += arg.real;
    temp.imag += arg.imag;

    return temp;
}

Complex1 Complex1::operator-(const Complex1 &arg) {
    Complex1 temp(*this);

    temp.real -= arg.real;
    temp.imag -= arg.imag;

    return temp;
}

Complex1 Complex1::operator*(const Complex1 &arg) {
    Complex1 temp(*this);

    double real2 = (temp.real * arg.real) - (arg.imag * temp.imag);
    double imag2 = (temp.imag * arg.real) + (temp.real * arg.imag);

    temp.real = real2;
    temp.imag = imag2;

    return temp;
}

Complex1 Complex1::operator/(const Complex1 &arg) {
    Complex1 temp(*this);

    double real2 = ((temp.real * arg.real) + (temp.imag * arg.imag)) / (pow(arg.real, 2) + pow(arg.imag, 2));
    double imag2 = ((temp.imag * arg.real) - (temp.real * arg.imag)) / (pow(arg.real, 2) + pow(arg.imag, 2));

    temp.real = real2;
    temp.imag = imag2;

    return temp;
}

Complex1 &Complex1::operator+=(const Complex1 &arg) {
    real += arg.real;
    imag += arg.imag;

    return *this;
}

Complex1 &Complex1::operator-=(const Complex1 &arg) {
    real -= arg.real;
    imag -= arg.imag;

    return *this;
}

Complex1 &Complex1::operator*=(const Complex1 &arg) {
    double real2 = (real * arg.real) - (arg.imag * imag);
    double imag2 = (imag * arg.real) + (real * arg.imag);

    real = real2;
    imag = imag2;

    return *this;
}

Complex1 &Complex1::operator/=(const Complex1 &arg) {
    double real2 = ((real * arg.real) + (imag * arg.imag)) / (pow(arg.real, 2) + pow(arg.imag, 2));
    double imag2 = ((imag * arg.real) - (real2 * arg.imag)) / (pow(arg.real, 2) + pow(arg.imag, 2));

    real = real2;
    imag = imag2;

    return *this;
}

bool Complex1::operator==(const Complex1 &arg) {
    return (real == arg.real && imag == arg.imag);
}

bool Complex1::operator!=(const Complex1 &arg) {
    return !(real == arg.real && imag == arg.imag);
}

double Complex1::getModulus() {
    return sqrt((pow(real, 2) + pow(imag, 2)));
}

string Complex1::toString() {
    stringstream ss;
    if (getImag() < 0) ss << getReal() << getImag() << "i";
    else ss << getReal() << "+" << getImag() << "i";

    return ss.str();
}


