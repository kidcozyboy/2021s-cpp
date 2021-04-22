#include "DoubleArray.h"

using namespace std;

DoubleArray::DoubleArray(){
    int sz = 8;
    size = sz;
    data = new double[sz];
}

DoubleArray::DoubleArray(int sz){
    size = sz;
    data = new double[sz];
}

DoubleArray::DoubleArray(const DoubleArray& orig){
    size = orig.size;
    data = new double[size];
    for (int i = 0; i < size; i++){
        data[i] = orig.data[i];
    }
    pos = orig.pos;
}

DoubleArray::~DoubleArray(){
    delete[] data;
}

void DoubleArray::add(double d){
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

void DoubleArray::remove(){
    data[pos] = data[pos + 1];
    pos--;
}

void DoubleArray::remove(int idx){
    if (idx > pos || idx < 0) return;


    for (int i = idx; i < size; i++){
        data[i] = data[i + 1];
    }

    pos--;
}

void DoubleArray::insert(int idx, double d){
    if (idx > pos || idx < 0) return;

    for (int i = pos; i > idx; i--){
        data[i] = data[i - 1];
    }

    data[idx] = d;
    pos++;
}

void DoubleArray::print(){
    for(int i = 0; i <= pos - 1; i++){
        cout << i << "番目: " << data[i] << endl;
    }
    cout << endl;
}
