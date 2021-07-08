#include <iostream>
#include "ShoppingCart0.h"

using namespace std;

int main() {
    ShoppingCart0 myCart;
    string item;
    int amount;
    while (true) {
        cout << "購入品と個数を入力(9999で終了) >> "; cin >> item;
        if (item == "9999") break;
        cin >> amount;
        myCart.buy(item, amount);
    }
    cout << myCart.getReceipt() << endl;
}