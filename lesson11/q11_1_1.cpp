#include <iostream>

using namespace std;

template <class Type> Type square(Type t) {
    return t * t;
}

int main() {
    double a;

    cout << "xの二乗を求める。" << endl;
    cout << "xの値: "; cin >> a;
    cout << a << "の2乗 = " << square(a) << endl;
}