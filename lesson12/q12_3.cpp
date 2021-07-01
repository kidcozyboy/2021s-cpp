#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

template <class Type> class Stack {
private:
    vector<Type> vec;

public:
    void push(Type type) {
        vec.push_back(type);
    }

    Type pop() {
        if (vec.empty()) throw out_of_range("スタックが空です。");
        Type value = vec.back();
        vec.pop_back();
        return value;
    }

    int size() {
        return vec.size();
    }

    string str() {
        stringstream ss;
        int count = 0;
        ss << "{";
        for (Type num: vec) {
            if (++count == (int)vec.size()) {
                ss << num << "}" << endl;
                break;
            }
            ss << num << ", ";
        }
        return ss.str();
    }
};

int main() {
    Stack<double> stack1;
    for (int i = 0; i < 5; i++) {
        stack1.push(i * 0.3);
    }
    cout << stack1.str();

    stack1.push(1.234);
    cout << stack1.str();

    cout << "pop!: " << stack1.pop() << endl;
    cout << stack1.str();

    Stack<int> stack2;
    for (int i = 0; i < 4; i++) {
        stack2.push(i);
    }
    cout << stack2.str();

    stack2.push(1234);
    cout << stack2.str();

    cout << "pop!: " << stack2.pop() << endl;
    cout << stack2.str();
}