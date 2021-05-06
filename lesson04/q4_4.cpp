#include "Date.h"
#include "Log.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    Date day(2021, 5, 4);
    Log maythe4th(day, "May the 4th be with you!");

    cout << "date byte: " << sizeof(day) << endl;
    cout << maythe4th.str() << endl;
    Date::set_display_string();
    cout << maythe4th.str() << endl;
}
