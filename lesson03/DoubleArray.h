#ifndef DOUBLEARRAY_H_
#define DOUBLEARRAY_H_

#include <iostream>

class DoubleArray{
private:
    int size;
    double *data;
    int pos = 0;
public:
    DoubleArray();
    DoubleArray(int sz);
    DoubleArray(const DoubleArray& orig);
    ~DoubleArray();

    int getSize(){
        return size;
    }
    void setSize(int sz){
        size = sz;
    }

    double* getData(){
        return data;
    }
    void setData(double* dt){
        data = dt;
    }

    int getPos(){
        return pos;
    }
    void setPos(int p){
        pos = p;
    }

    void add(double d);
    void remove();
    void remove(int idx);
    void insert(int idx, double d);
    void print();


};

#endif /* DOUBLEARRAY_H_ */