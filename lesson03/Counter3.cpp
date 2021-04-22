#include <climits>
#include "Counter3.h"

using namespace std;

Counter3::Counter3() {
    cnt = 0;
}

Counter3::operator unsigned() {
    return cnt;
}

bool Counter3::operator!() {
    return cnt == 0;
}

Counter3& Counter3::operator++() {
    if(cnt < UINT_MAX) cnt++;
    return *this;
}

Counter3 Counter3::operator++(int) {
    Counter3 x = *this;
    ++(*this);
    return x;
}

Counter3& Counter3::operator--() {
    if(cnt > 0) cnt--;
    return *this;
}

Counter3 Counter3::operator--(int) {
    Counter3 x = *this;
    --(*this);
    return x;
}
