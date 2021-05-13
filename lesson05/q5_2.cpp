#include "Complex2.h"

using namespace std;

int main(){
    double real, imag;
    cout << "aの実部 >>> "; cin >> real;
    cout << "aの虚部 >>> "; cin >> imag;
    const Complex2 a(real, imag);

    cout << "bの実部 >>> "; cin >> real;
    cout << "bの虚部 >>> "; cin >> imag;
    const Complex2 b(real, imag);

    if (a == b) {
        cout << "a と b は等しい複素数です" << endl;
    } else {
        cout << "a と b は等しくありません" << endl;
    }

    Complex2 c = -a + b;
    cout << "-a + b = " << c.toString() << endl;

    c += b;
    c -= Complex2(1.0, 1.0);
    cout << "-a + b + b - (1 + i) = " << c.toString() << endl;

    Complex2 d = a * b;
    cout << "a * b = " << d.toString() << endl;
}
