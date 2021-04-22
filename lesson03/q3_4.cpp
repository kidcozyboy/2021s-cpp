#include <iostream>
#include "Counter3.h"

using namespace std;

int main() {
    int no;
    Counter3 x;
    Counter3 y;

    cout << "カウントアップ回数: "; cin >> no;

    for(int i = 0; i < no; i++) cout << x++ << ' ' << ++y << endl;

    cout << "カウントダウン回数: "; cin >> no;

    for(int i = 0; i < no; i++) cout << x-- << ' ' << --y << endl;

    if(!x) cout << "xは0です。\n";
    else cout << "xは0ではありません。\n";
}

/*
 * まず、後置演算子が呼ばれたら、*thisのコピーを作る。
 * 次に、前置演算子関数を呼び、cntをインクリメントする。
 * 最後に、最初に作ったコピーを返す。
 *
 * 後置演算子の処理では、その処理が呼ばれた場所ではインクリメントされる前の値が参照される(コピーされたものが返るため)
 * コピー元の変数は前置演算子を呼び出し、インクリメントしているので、実際の数字は増えている。
 */