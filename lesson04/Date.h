#ifndef DATE_H_
#define DATE_H_


#include <string>

class Date {
private:
    int year;
    int month;
    int day;
    static int display_mode;
    static const char *month_map[];
    static const int display_number = 0;
    static const int display_string = 1;

public:
    Date();
    Date(int, int, int);
    Date(const Date&);
    Date& operator=(const Date&);
    std::string str();
    static void set_display_number() { display_mode = display_number; }
    static void set_display_string() { display_mode = display_string; }
};


#endif //DATE_H_
