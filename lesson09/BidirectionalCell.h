#ifndef BIDIRECTIONAL_CELL_H_
#define BIDIRECTIONAL_CELL_H_

#include <cstdlib>

class BidirectionalCell {
public:
    int value;
    BidirectionalCell* forward;
    BidirectionalCell* backward;
    BidirectionalCell(int val = 0): value(val), forward(NULL), backward(NULL) {}
};


#endif //BIDIRECTIONAL_CELL_H_
