#include <iostream>

using namespace std;

template <class Type> class Queue {
private:
    int nelem;
    int pos;
    Type *vec;

public:
    Queue(): nelem(100), pos(0), vec(new Type[nelem]) {}
    int size() const { return nelem; }
    int getPos() const { return pos; }
    Type getVec(int i) const { return vec[i]; }

    void offer(Type type) {
        vec[pos++] = type;
    }

    Type poll() {
        Type result = vec[0];
        Type *tmp = new Type[nelem];

        for (int i = 0; i < pos; i++) {
            tmp[i] = vec[i + 1];
        }

        pos--;
        return result;
    }

};

template <class Type> void toString(Type const queue) {
    cout << "Stackの中身: \n";
    for (int i = 0; i < queue.getPos(); i++) {
        cout << "vec[" << i << "] = " << queue.getVec(i) << endl;
    }
}

int main() {
    Queue<double> queue1;
    for (int i = 0; i < 5; i++) {
        queue1.offer(i * 0.3);
    }
    toString(queue1);

    Queue<int> queue2;
    for (int i = 0; i < 4; i++) {
        queue2.offer(i);
    }
    toString(queue2);

    queue2.poll();
    toString(queue2);

}