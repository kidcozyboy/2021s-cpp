#include <iostream>
#include <cstring>

using namespace std;

template <class Type> Type minof(Type const t[], int n) {
    Type min = t[0];

    for (int i = 0; i < n; i++) {
        min = min < t[i] ? min : t[i];
    }
    return min;
}

template <> const char* minof<const char*>(const char* const t[], int n) {
    const char* min = t[0];

    for (int i = 0; i < n; i++) {
        min = strcmp(t[i], min) < 0 ? t[i] : min;
    }
    return min;
}

int main() {
    int a, b;
    char s[64], t[64];

    cout << "整数a: "; cin >> a;
    cout << "整数b: "; cin >> b;
    cout << "文字列s: "; cin >> s;
    cout << "文字列t: "; cin >> t;

    int nums[] = {a, b};
    char* chars[] = {s, t};
    int n = 2;

    cout << "aとbで小さいのは" << minof(nums, n) << "です。\n";
    cout << "sとtで小さいのは" << minof<const char*>(chars, n) << "です。\n";
}