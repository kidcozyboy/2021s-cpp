#include "Date.h"

#include <string>
#include <sstream>
#include <iomanip>

Date::Date() { year = 1970; month = 1; day = 1; }

Date::Date(int y, int m, int d) {
    year = y; month = m; day = d;
}

Date::Date(const Date& orig) {
    year = orig.year; month = orig.month; day = orig.day;
}

Date& Date::operator=(const Date& dt) {
    year = dt.year; month = dt.month; day = dt.day;
    return *this;
}

std::string Date::str() { 
    std::stringstream ss; 
    ss << std::setfill('0'); 
    if (display_mode == display_string) { 
        ss << std::setw(4) << year << "-" << month_map[month-1] << "-" << std::setw(2) << day;
    } else {
        ss << std::setw(4) << year << "/" << std::setw(2) << month << "/" << std::setw(2) << day;
    }
    return ss.str();
}

int Date::display_mode = Date::display_number;

const char*Date::month_map[] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun", "JUI", "Aug", "sep", "Oct", "NOV", "DeC" };