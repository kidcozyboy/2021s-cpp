#include "Complex.h"
#include <cmath>
#include <sstream>

using namespace std;

Complex::Complex(double real, double imag):
        real(real), imag(imag) {}

Complex::Complex(const Complex &orig):
        real(orig.real), imag(orig.imag) {}

Complex& Complex::operator=(const Complex &arg) {
    real = arg.real;
    imag = arg.imag;

    return *this;
}

Complex Complex::operator+(const Complex &arg) const {
    Complex temp(*this);

    return temp += arg;
}

Complex Complex::operator-(const Complex &arg) const {
    Complex temp(*this);

    return temp -= arg;
}

Complex Complex::operator*(const Complex &arg) const {
    Complex temp(*this);

    return temp *= arg;
}

Complex Complex::operator/(const Complex &arg) const {
    Complex temp(*this);

    return temp /= arg;
}

Complex &Complex::operator+=(const Complex &arg) {
    real += arg.real;
    imag += arg.imag;

    return *this;
}

Complex &Complex::operator-=(const Complex &arg) {
    real -= arg.real;
    imag -= arg.imag;

    return *this;
}

Complex &Complex::operator*=(const Complex &arg) {
    double real2 = (real * arg.real) - (arg.imag * imag);
    double imag2 = (imag * arg.real) + (real * arg.imag);

    real = real2;
    imag = imag2;

    return *this;
}

Complex &Complex::operator/=(const Complex &arg) {
    double real2 = ((real * arg.real) + (imag * arg.imag)) / (pow(arg.real, 2) + pow(arg.imag, 2));
    double imag2 = ((imag * arg.real) - (real * arg.imag)) / (pow(arg.real, 2) + pow(arg.imag, 2));

    real = real2;
    imag = imag2;

    return *this;
}

bool Complex::operator==(const Complex &arg) const {
    return (real == arg.real && imag == arg.imag);
}

bool Complex::operator!=(const Complex &arg) const {
    return !(real == arg.real && imag == arg.imag);
}

double Complex::getModulus() const {
    return sqrt((pow(real, 2) + pow(imag, 2)));
}

//string Complex::toString() const {
//    stringstream ss;
//    if (getImag() < 0) ss << getReal() << getImag() << "i";
//    else ss << getReal() << "+" << getImag() << "i";
//
//    return ss.str();
//}

Complex operator+(double x, const Complex &y) {
    Complex temp(y);
    temp.real += x;
    return temp;
}

Complex operator*(double x, const Complex &y) {
    Complex temp(y);
    temp.real *= x;
    temp.imag *= x;
    return temp;
}

ostream& operator<<(ostream& ostream, const Complex& complex) {
    if (complex.imag < 0) return ostream << complex.real << complex.imag << "i";
    else return ostream << complex.real << "+" << complex.imag << "i";
}
