#include <iostream>

using namespace std;

class IntArray{
public:
    int size;
    int *data;

    IntArray(int sz){
        size = sz;
        data = new int[sz];
        cout << "引数付きコンストラクタ" << endl;
    }

    IntArray(const IntArray& orig){
        size = orig.size;
        data = new int[size];
        for (int i = 0; i < size; i++){
            data[i] = orig.data[i];
        }
        cout << "コピーコンストラクタ" << endl;
    }

    ~IntArray(){
        delete[] data;
    }
};

int main(){
    IntArray a = IntArray(3);
    IntArray b = a;
    IntArray c = 3;
}

/*
 * a は 引数付きコンストラクタを実行した値を代入しているため、引数付きコンストラクタが呼ばれた。
 * b は 変換コンストラクタでIntArray型のa使っているため、コピーコンストラクタが呼ばれた。
 * c は 変換コンストラクタでint型の3を使っているため、引数付きコンストラクタが呼ばれた。
*/