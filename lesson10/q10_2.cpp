#include <iostream>
#include <exception>
#include <stdexcept>

using namespace std;

string dayString(int dayInt) {
    switch (dayInt) {
        case 0:
            return "日曜日";

        case 1:
            return "月曜日";

        case 2:
            return "火曜日";

        case 3:
            return "水曜日";

        case 4:
            return "木曜日";

        case 5:
            return "金曜日";

        case 6:
            return "土曜日";

        default:
            throw out_of_range("入力された数字が不正。");
    }
}

int main() {
    int x;
    cout << "曜日の値(0～6) >>> "; cin >> x;

    try {
        cout << "入力した数字に対応する曜日は " << dayString(x) << " です。\n";
    } catch (const exception& e) {
        cerr << "エラー発生: " << e.what() << endl;
    }
}