#include <ctime>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    const int loops = 10000000;

    int t0 = clock();
    vector<int> w;
    for (int i = 0; i < loops; i++) {
        w.push_back(i);
    }
    int t1 = clock();
    cout << "vector: " << (float)(t1 - t0) / CLOCKS_PER_SEC << endl;

    t0 = clock();
    vector<int> x;
    x.reserve(loops);
    for (int i = 0; i < loops; i++) {
        x.push_back(i);
    }
    t1 = clock();
    cout << "vector_reserve: " << (float)(t1 - t0) / CLOCKS_PER_SEC << endl;
}