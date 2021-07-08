#include <ctime>
#include <iostream>
#include <deque>
#include <stack>
#include <queue>
#include <set>

using namespace std;

int main() {
    const int loops = 10000000;

    int t0 = clock();
    deque<int> w;
    for (int i = 0; i < loops; i++) {
        w.push_back(i);
    }
    int t1 = clock();
    cout << "deque: " << (float)(t1 - t0) / CLOCKS_PER_SEC << endl;

    t0 = clock();
    stack<int> x;
    for (int i = 0; i < loops; i++) {
        x.push(i);
    }
    t1 = clock();
    cout << "stack: " << (float)(t1 - t0) / CLOCKS_PER_SEC << endl;

    t0 = clock();
    queue<int> y;
    for (int i = 0; i < loops; i++) {
        y.push(i);
    }
    t1 = clock();
    cout << "queue: " << (float)(t1 - t0) / CLOCKS_PER_SEC << endl;

    t0 = clock();
    set<int> z;
    for (int i = 0; i < loops; i++) {
        z.insert(i);
    }
    t1 = clock();
    cout << "set: " << (float)(t1 - t0) / CLOCKS_PER_SEC << endl;
}