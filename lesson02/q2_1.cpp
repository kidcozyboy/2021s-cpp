#include <iostream>

using namespace std;

class DoubleArray{
public:
    int size;
    double *data;
    int pos = 0;

    DoubleArray(){
        int sz = 8;
        size = sz;
        data = new double[sz];
    }

    DoubleArray(int sz){
        size = sz;
        data = new double[sz];
    }

    DoubleArray(const DoubleArray& orig){
        size = orig.size;
        data = new double[size];
        for (int i = 0; i < size; i++){
            data[i] = orig.data[i];
        }
        pos = orig.pos;
    }

    ~DoubleArray(){
        delete[] data;
    }

    void add(double d){
        if (++pos > size){
            size *= 2;
            double *data2 = new double[size];
            for (int i = 0; i < size; i++){
                data2[i] = data[i];
            }
            data = data2;
        }
        data[pos - 1] = d;
    }

    void print(){
        for(int i = 0; i <= pos - 1; i++){
            cout << i << "番目: " << data[i] << endl;
        }
    }
};

int main(){
    DoubleArray d1;
    cout << d1.size << "," << d1.pos << endl;

    for (int i = 0; i < 20; i++){
        d1.add(i);
    }

    cout << d1.size << "," << d1.pos << endl;
    DoubleArray d2 = d1;
    d2.add(100.0);
    cout << d2.size << "," << d2.pos << endl;

    d1.print();
    d2.print();
}