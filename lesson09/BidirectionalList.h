#ifndef BIDIRECTIONAL_LIST_H_
#define BIDIRECTIONAL_LIST_H_

#include "BidirectionalCell.h"
#include <cstdlib>
#include <sstream>
#include <iostream>

class BidirectionalList {
private:
    BidirectionalCell* top;
    BidirectionalCell* tail;

public:
    BidirectionalList(): top(NULL), tail(NULL) {}

    ~BidirectionalList();

    void pushTop(int value);
    void pushTail(int value);
    int popTop();
    int popTail();

    std::string toString() const;
};


#endif //BIDIRECTIONAL_LIST_H_
