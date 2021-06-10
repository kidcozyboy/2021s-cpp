#include "SimpleList.h"
#include <iostream>

using namespace std;

int main() {
    SimpleList* list = new SimpleList();
    list->pushTop(1);
    list->pushTail(2);
    list->pushTop(3);

    cout << "list = " << list->toString() << endl;

    int x = list->popTail();

    cout << "x = " << x << ", list = " << list->toString() << endl;

    list->pushTop(4);
    list->pushTop(5);
    x = list->popTop();

    cout << "x = " << x << ", list = " << list->toString() << endl;

    delete list;
}
