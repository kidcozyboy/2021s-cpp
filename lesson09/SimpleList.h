#ifndef SIMPLE_LIST_H_
#define SIMPLE_LIST_H_

#include "Cell.h"
#include <cstdlib>
#include <string>

class SimpleList {
private:
    Cell* top;

public:
    SimpleList(): top(NULL) {}

    ~SimpleList();

    void pushTop(int value);
    void pushTail(int value);
    int popTop();
    int popTail();

    std::string toString() const;
};

#endif //SIMPLE_LIST_H_
