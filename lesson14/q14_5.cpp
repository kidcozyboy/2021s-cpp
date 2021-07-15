#include <iostream>

using namespace std;

bool isEven(int a) {
    if (a < 2) return false;
    return a % 2 == 0;
}

bool isOdd(int a) {
    if (a == 0) return false;
    if (a == 1) return true;
    return (a - 1) % 2 == 0;
}

bool isDividableByFive(int a) {
    if (a == 0) return false;
    return a % 5 == 0;
}

bool isOverFifteen(int a) {
    return a > 15;
}

int search_if(const int ary[], int size, bool (*cond)(int x)) {
    for (int i = 0; i < size; i++) {
        if (cond(ary[i])) return i;
    }
    return -1;
}

int main() {
    int ary[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 11;

    cout << "ary[]の最初の偶数の添え字は" << search_if(ary, size, isEven) << endl;
    cout << "ary[]の最初の奇数の添え字は" << search_if(ary, size, isOdd) << endl;
    cout << "ary[]の最初の5で割り切れる数の添え字は" << search_if(ary, size, isDividableByFive) << endl;
    cout << "ary[]の15を超える添え字は" << search_if(ary, size, isOverFifteen) << endl;

}
