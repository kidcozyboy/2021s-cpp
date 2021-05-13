#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>

class Complex {
private:
    double real; // 実部
    double imag; // 虚部

public:
    Complex(double real=0, double imag=0); // 引数付きコンストラクタ
    Complex(const Complex& orig); // コピーコンストラクタ

    Complex& operator=(const Complex& arg); // 代入演算子
    Complex operator+() const { return *this; } // 単項演算子 +c
    Complex operator-() const { return  Complex(-real, -imag); } // 単項演算子 -c
    Complex operator+(const Complex& arg) const; // 加算
    Complex operator-(const Complex& arg) const; // 減算
    Complex operator*(const Complex& arg) const; // 乗算
    Complex operator/(const Complex& arg) const; // 除算
    Complex& operator+=(const Complex& arg); // 複合演算子
    Complex& operator-=(const Complex& arg); // 複合演算子
    Complex& operator*=(const Complex& arg); // 複合演算子
    Complex& operator/=(const Complex& arg); // 複合演算子
    bool operator==(const Complex& arg) const; // 等号
    bool operator!=(const Complex& arg) const; // 不等号

    double getReal() const { return real; } // 実部を返す
    double getImag() const { return imag; } // 虚部を返す
    double getModulus() const; // 絶対値
//    std::string toString() const; // 3 + 4i のような表示文字列

    friend std::ostream& operator<<(std::ostream&, const Complex&);
    friend Complex operator+(double x, const Complex& y);
    friend Complex operator*(double x, const Complex& y);
};

std::ostream& operator<<(std::ostream& ostream, const Complex& complex);



#endif //COMPLEX_H_
