#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<int> x;
    int n;

    cout << "整数 n を入力 >>> "; cin >> n;

    for (int i = 1; i <= n; i++) {
        if (x.empty()) {
            x.push_back(i);
        } else {
            x.push_back(x.back() * i);
        }

        cout << i << "の階乗は" << x.back() << endl;
    }

    int total = 0;

    for (int num : x) {
        total += num;
    }

    cout << "総和は" << total;
}