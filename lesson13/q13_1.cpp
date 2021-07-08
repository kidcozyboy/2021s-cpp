#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, string> prefecture;
    prefecture["東京"] = "東京";
    prefecture["神奈川"] = "横浜";
    prefecture["埼玉"] = "さいたま";
    prefecture["千葉"] = "千葉";
    prefecture["茨城"] = "水戸";
    prefecture["栃木"] = "宇都宮";
    prefecture["群馬"] = "前橋";

    while (true) {
        string prefecture_str;
        cout << "都県名を入力(9999で終了) >> "; cin >> prefecture_str;
        if (prefecture_str == "9999") break;
        if (!(prefecture.find(prefecture_str) != prefecture.end())) continue;
        cout << prefecture_str << "の県庁所在地は、" << prefecture[prefecture_str] << "です。" << endl;
    }
}