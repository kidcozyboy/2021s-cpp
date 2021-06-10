#include "BidirectionalList.h"

BidirectionalList::~BidirectionalList() {
    BidirectionalCell* cell = top;
    BidirectionalCell* tmp;

    while (cell != NULL) {
        tmp = cell;

        std::cout << cell << ", " << cell->value << std::endl;

        cell = tmp->backward;

        delete tmp;
    }
    delete cell;
}

void BidirectionalList::pushTop(int value) {
    BidirectionalCell* tmp = new BidirectionalCell(value);

    if (top == NULL && tail == NULL) {
        top = tmp;
        tail = tmp;
    } else {
        top->forward = tmp;
        tmp->backward = top;
        top = tmp;
    }

}

void BidirectionalList::pushTail(int value) {
    BidirectionalCell* tmp = new BidirectionalCell(value);

    if (top == NULL && tail == NULL) {
        top = tmp;
        tail = tmp;
    } else {
        tail->backward = tmp;
        tmp->forward = tail;
        tail = tmp;
    }
}

int BidirectionalList::popTop() {
    if (top == NULL) return -1;

    int value = top->value;

    if (top->backward != NULL) {
        top->backward->forward = NULL;
        BidirectionalCell* tmp = top->backward;

        delete top;
        top = tmp;
    } else {
        delete top;
    }

    return value;
}

int BidirectionalList::popTail() {
    if (tail == NULL) return -1;

    int value = tail->value;

    if (tail->forward != NULL) {
        tail->forward->backward = NULL;
        BidirectionalCell* tmp = tail->forward;

        delete tail;
        tail = tmp;
    } else {
        delete tail;
    }

    return value;
}

std::string BidirectionalList::toString() const {
    std::stringstream ss;
    BidirectionalCell* tmp = top;

    while (tmp != NULL) {
        ss << tmp->value << ' ';
        tmp = tmp->backward;
    }

    return ss.str();
}
