#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

Book::Book(std::string ti, std::string au, std::string pub, int ye, int pr, std::string fi, int num, bool lend, std::string bu) {
    title = ti;
    author = au;
    publisher = pub;
    year = ye;
    price = pr;
    field = fi;
    number = num;
    lending = lend;
    borrowUser = bu;
}

void Book::changeBorrower(std::string name){
    borrowUser = name;
    changeState();
}

void Book::changeState(){
    lending = !lending;
}

void Book::print() {
    string lend = "いいえ";
    if (isLending()) lend = "はい";
    cout << "----------本の情報----------" << endl;
    cout << "タイトル: " << title << endl;
    cout << "著者: " << author << endl;
    cout << "出版社: " << publisher << endl;
    cout << "出版年: " << year << endl;
    cout << "値段: " << price << endl;
    cout << "分野: " << field << endl;
    cout << "図書館番号: " << number << endl;
    cout << "貸し出し中: " << lend << endl;
    cout << "借りた人: " << borrowUser << endl;
}