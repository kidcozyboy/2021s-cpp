#ifndef LOG_H_
#define LOG_H_

#include "Date.h"
#include <string>

class Log {
private:
    Date when;
    std::string contents;

public:
    Log();
    Log(Date, std::string);
    Log(const Log&);
    std::string str();
};


#endif //LOG_H_
