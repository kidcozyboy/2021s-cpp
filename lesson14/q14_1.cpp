#include <string>
#include <iostream>

using namespace std;

int main() {
    string st1 = "ABC";
    string st2 = "ABC" + st1;
    string st3 = st1 + st2;
    string st4 = st1 + "UVW";
    string st5 = "UVWXYZ";
    string st6 = st1 + "UVW" + "XYZ";
    string st7 = "UVWXYZ" + st1;
    string st8 = "ABCD";
    string st9 = st1 + 'D';

    cout << "stl = " << st1 << endl;
    cout << "st2 = " << st2 << endl;
    cout << "st3 = " << st3 << endl;
    cout << "st4 = " << st4 << endl;
    cout << "st5 = " << st5 << endl;
    cout << "st6 = " << st6 << endl;
    cout << "st7 = " << st7 << endl;
    cout << "st8 = " << st8 << endl;
    cout << "st9 = " << st9 << endl;
}
