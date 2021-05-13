#ifndef COMPLEX1_H_
#define COMPLEX1_H_

#include <iostream>

class Complex1 {
private:
    double real; // 実部
    double imag; // 虚部

public:
    Complex1(double real=0, double imag=0); // 引数付きコンストラクタ
    Complex1(const Complex1& orig); // コピーコンストラクタ

    Complex1& operator=(const Complex1& arg); // 代入演算子
    Complex1 operator+() { return *this; } // 単項演算子 +c
    Complex1 operator-() { return  Complex1(-real, -imag); } // 単項演算子 -c
    Complex1 operator+(const Complex1& arg); // 加算
    Complex1 operator-(const Complex1& arg); // 減算
    Complex1 operator*(const Complex1& arg); // 乗算
    Complex1 operator/(const Complex1& arg); // 除算
    Complex1& operator+=(const Complex1& arg); // 複合演算子
    Complex1& operator-=(const Complex1& arg); // 複合演算子
    Complex1& operator*=(const Complex1& arg); // 複合演算子
    Complex1& operator/=(const Complex1& arg); // 複合演算子
    bool operator==(const Complex1& arg); // 等号
    bool operator!=(const Complex1& arg); // 不等号

    double getReal() { return real; } // 実部を返す
    double getImag() { return imag; } // 虚部を返す
    double getModulus(); // 絶対値
    std::string toString(); // 3 + 4i のような表示文字列
};


#endif //COMPLEX1_H_
