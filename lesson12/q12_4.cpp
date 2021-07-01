#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<double> v(5);
    double value = .5;

    for(vector<double>::reverse_iterator p = v.rbegin(); p != v.rend(); p++) {
        *p = value;
        value -= .1;
    }

    for(vector<double>::const_iterator p = v.begin(); p != v.end(); p++) {
        cout << *p << ' ';
    }

    cout << endl;
    vector<double>::difference_type d1 = v.end() - v.begin();
    vector<double>::difference_type d2 = v.rend() - v.rbegin();
    cout << "v.end() - v.begin() = " << d1 << endl;
    cout << "v.rend() - v.rbegin() = " << d2 << endl;
}