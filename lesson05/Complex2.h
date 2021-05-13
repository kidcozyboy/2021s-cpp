#ifndef COMPLEX2_H_
#define COMPLEX2_H_

#include <iostream>

class Complex2 {
private:
    double real; // 実部
    double imag; // 虚部

public:
    Complex2(double real=0, double imag=0); // 引数付きコンストラクタ
    Complex2(const Complex2& orig); // コピーコンストラクタ

    Complex2& operator=(const Complex2& arg); // 代入演算子
    Complex2 operator+() const { return *this; } // 単項演算子 +c
    Complex2 operator-() const { return  Complex2(-real, -imag); } // 単項演算子 -c
    Complex2 operator+(const Complex2& arg) const; // 加算
    Complex2 operator-(const Complex2& arg) const; // 減算
    Complex2 operator*(const Complex2& arg) const; // 乗算
    Complex2 operator/(const Complex2& arg) const; // 除算
    Complex2& operator+=(const Complex2& arg); // 複合演算子
    Complex2& operator-=(const Complex2& arg); // 複合演算子
    Complex2& operator*=(const Complex2& arg); // 複合演算子
    Complex2& operator/=(const Complex2& arg); // 複合演算子
    bool operator==(const Complex2& arg) const; // 等号
    bool operator!=(const Complex2& arg) const; // 不等号

    double getReal() const { return real; } // 実部を返す
    double getImag() const { return imag; } // 虚部を返す
    double getModulus() const; // 絶対値
    std::string toString() const; // 3 + 4i のような表示文字列
};


#endif //COMPLEX2_H_
