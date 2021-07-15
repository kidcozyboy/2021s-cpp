#include <string>
#include <iostream>

using namespace std;

int main() {
    string connectStr;

    while (true) {
        string str;
        cout << "挿入したい文字を入力(終了: end) >>> ";
        cin >> str;

        if (str == "end") break;

        int pos;
        int len = (int)connectStr.length();

        if (len >= 2) {
            if (len % 2 == 0) pos = len / 2;
            else pos = (len - 1) / 2;
            connectStr.insert(pos, str);
        } else {
            connectStr.append(str);
        }

        cout << connectStr << endl;
    }
}
