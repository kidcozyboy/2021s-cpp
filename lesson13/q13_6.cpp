#include <ctime>
#include <iostream>
#include <list>

using namespace std;

int main() {
    const int loops = 10000000;

    int t0 = clock();
    list<int> w;
    for (int i = 0; i < loops; i++) {
        w.push_back(i);
    }
    int t1 = clock();
    cout << "list_push_back: " << (float)(t1 - t0) / CLOCKS_PER_SEC << endl;

    t0 = clock();
    list<int> x;
    for (int i = 0; i < loops; i++) {
        x.push_front(i);
    }
    t1 = clock();
    cout << "list_push_front: " << (float)(t1 - t0) / CLOCKS_PER_SEC << endl;

    t0 = clock();
    list<int> y;
    for (int i = 0; i < loops; i++) {
        y.insert(y.end(), i);
    }
    t1 = clock();
    cout << "list_insert: " << (float)(t1 - t0) / CLOCKS_PER_SEC << endl;
}