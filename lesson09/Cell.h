#ifndef CELL_H_
#define CELL_H_

#include <cstdlib>

class Cell {
public:
    int value;
    Cell* next;
    Cell(int val = 0): value(val), next(NULL) {}
};


#endif //CELL_H_
