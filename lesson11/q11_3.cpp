#include <iostream>

using namespace std;

template <class Type> class Stack {
private:
    int nelem;
    int pos;
    Type *vec;

public:
    Stack(): nelem(100), pos(0), vec(new Type[nelem]) {}
    int size() const { return nelem; }
    int getPos() const { return pos; }
    Type getVec(int i) const { return vec[i]; }

    void push(Type type) {
        vec[pos++] = type;
    }

    Type pop() {
        return vec[pos--];
    }

};

template <class Type> void toString(Type const stack) {
    cout << "Stackの中身: \n";
    for (int i = 0; i < stack.getPos(); i++) {
        cout << "vec[" << i << "] = " << stack.getVec(i) << endl;
    }
}

int main() {
    Stack<double> stack1;
    for (int i = 0; i < 5; i++) {
        stack1.push(i * 0.3);
    }
    toString(stack1);

    Stack<int> stack2;
    for (int i = 0; i < 4; i++) {
        stack2.push(i);
    }
    toString(stack2);

    stack2.pop();
    toString(stack2);

}