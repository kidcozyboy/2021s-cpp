#include <iostream>

using namespace std;

template <class Type> Type minof(Type t1, Type t2) {
    return t1 < t2 ? t1 : t2;
}

int main() {
    int a, b;
    double x;

    cout << "整数a: "; cin >> a;
    cout << "整数b: "; cin >> b;
    cout << "実数x: "; cin >> x;

    cout << "aとbで小さいのは" << minof(a, b) << "です。\n";
    cout << "aとxで小さいのは" << minof<double>(a, x) << "です。\n";
}