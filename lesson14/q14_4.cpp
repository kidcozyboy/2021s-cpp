#include <string>
#include <iostream>

using namespace std;

string fillStar() {
    return "★";
}

string drawStar() {
    return "☆";
}

void printStar(string star(), int num) {
    cout << star() << num << endl;
}

int main() {
    while (true) {
        string str;
        cout << "何回文字を出力しますか？ >>> ";
        cin >> str;

        if (str == "end") break;

        int num = stoi(str);

        bool even = true;

        for (int i = 0; i < num; i++) {
            if (even) {
                printStar(fillStar, i);
                even = false;
            } else {
                printStar(drawStar, i);
                even = true;
            }
        }
    }
}
