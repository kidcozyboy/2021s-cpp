#include <string>
#include <iostream>

using namespace std;

int main() {
    string connectStr;

    while (true) {
        string str;
        cout << "繋げたい文字を入力(終了: end) >>> ";
        cin >> str;

        if (str == "end") break;

        connectStr.append(str);
        cout << connectStr << endl;
    }
}
