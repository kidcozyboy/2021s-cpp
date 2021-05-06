#include "Date.h"
#include "Log.h"
#include <string>
#include <sstream>

Log::Log() {
    when = Date(); contents = "";
}

Log::Log(Date dt, std::string msg):
    when(dt), contents(msg){}

Log::Log(const Log& orig) {
    when = orig.when; contents = orig.contents;
}

std::string Log::str() {
    std::stringstream ss;
    ss << when.str() << " : " << contents ;
    return ss.str();
}