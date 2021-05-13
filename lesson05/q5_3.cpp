#include "Complex.h"

using namespace std;

int main(){
    double real, imag;
    cout << "aの実部 >>> "; cin >> real;
    cout << "aの虚部 >>> "; cin >> imag;
    const Complex a(real, imag);

    cout << "bの実部 >>> "; cin >> real;
    cout << "bの虚部 >>> "; cin >> imag;
    const Complex b(real, imag);

    if (a == b) {
        cout << "a と b は等しい複素数です" << endl;
    } else {
        cout << "a と b は等しくありません" << endl;
    }

    Complex c = -a + b;
    cout << "-a + b = " << c << endl;

    c += b;
    c -= Complex(1.0, 1.0);
    cout << "-a + b + b - (1 + i) = " << c << endl;

    Complex d = 5 * b;
    cout << "5 * b = " << d << endl;
}
