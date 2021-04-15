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

    void remove(){
        data[pos] = data[pos + 1];
        pos--;
    }

    void remove(int idx){
        if (idx > pos || idx < 0) return;


        for (int i = idx; i < size; i++){
            data[i] = data[i + 1];
        }

        pos--;
    }

    void insert(int idx, double d){
        if (idx > pos || idx < 0) return;

        for (int i = pos; i > idx; i--){
            data[i] = data[i - 1];
        }

        data[idx] = d;
        pos++;
    }

    void print(){
        for(int i = 0; i <= pos - 1; i++){
            cout << i << "番目: " << data[i] << endl;
        }
        cout << endl;
    }
};

int main(){
    DoubleArray d1;
    for (int i = 0; i < 20; i++){
        d1.add(i);
    }
    d1.print();

    d1.remove(3);
    d1.print();

    d1.insert(5, 100);
    d1.print();

    d1.remove();
    d1.print();

    d1.remove(30);
    d1.print();
}