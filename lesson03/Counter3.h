#ifndef Counter33_H_
#define Counter33_H_

#include <climits>

class Counter3 {
private:
    unsigned cnt;
public:
    Counter3();

    operator unsigned();

    bool operator!();

    Counter3& operator++();

    Counter3 operator++(int);

    Counter3& operator--();

    Counter3 operator--(int);
};


#endif //Counter33_H_
