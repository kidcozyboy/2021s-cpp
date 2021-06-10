#include "SimpleList.h"
#include <sstream>
#include <iostream>

void SimpleList::pushTop(int value) {
    Cell* tmp = new Cell(value);
    tmp->next = top;
    top = tmp;
}

void SimpleList::pushTail(int value) {
    Cell* tmp = new Cell(value);
    tmp->next = NULL;
    if (top == NULL) {
        top = tmp;
    } else {

        Cell* cell = top;
        while (cell->next != NULL) {
            cell = cell->next;
        }

        cell->next = tmp;
    }
}

int SimpleList::popTop() {
    if (top == NULL) {
        return -1;
    } else {
        Cell* cell = top;
        top = top->next;
        int value = cell->value;

        delete cell;
        return value;
    }
}

int SimpleList::popTail() {
    if (top == NULL) {
        return -1;
    } else {
        Cell* cell = top;
        Cell* tmp;

        while (cell->next != NULL) {
            tmp = cell;
            cell = cell->next;
        }

        int value = cell->value;
        delete cell;

        if (tmp->next == NULL) top = NULL;
        tmp->next = NULL;

        return value;
    }
}

std::string SimpleList::toString() const {
    std::stringstream ss;
    Cell* tmp = top;

    while (tmp != NULL) {
        ss << tmp->value << ' ';
        tmp = tmp->next;
    }

    return ss.str();
}

SimpleList::~SimpleList() {
    Cell* cell = top;
    Cell* tmp;

    while (cell != NULL) {
        tmp = cell;

        std::cout << cell << ", " << cell->value << std::endl;

        cell = tmp->next;

        delete tmp;
    }
    delete cell;
}
