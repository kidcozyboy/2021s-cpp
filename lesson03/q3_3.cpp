#include <iostream>
#include <string>
#include "Book.h"

using namespace std;

int main(){
    string title;
    string author;
    string publisher;
    int year;
    int price;
    string field;
    int number;

    cout << "タイトル >> "; cin >> title;
    cout << "著者 >> "; cin >> author;
    cout << "出版社 >> "; cin >> publisher;
    cout << "出版年 >> "; cin >> year;
    cout << "値段 >> "; cin >> price;
    cout << "分野 >> "; cin >> field;
    cout << "図書館番号 >> "; cin >> number;

    Book myBook(title, author, publisher, year, price, field, number, false, "");

    myBook.print();

    myBook.changeBorrower("中田健司");

    myBook.print();
}