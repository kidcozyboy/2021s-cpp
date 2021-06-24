#include <new>
#include <iostream>
#include "Array2.h"

using namespace std;

int main() {
    try {
        int no;
        Array2<int> x(5);
        Array2<double> y(8);
        cout << "データ数: "; cin >> no;

        for(int i = 0; i < no; i++) {
            x[i] = i;
            y[i] = 0.1 * i;

            cout << "x[" << i << "] = " << x[i] << " " << "y[" << i << "] = " << y[i] << endl;
        }

        const Array2<double> z=y;
        for(int i = 0; i < no; i++) {
            cout << "z[" << i << "] = " << z[i] << endl;
        }

        cout << "z[" << no << "] = " << z[no] << endl;

    } catch (const bad_alloc&) {
        cout << "メモリの確保に失敗しました。\n";
        return 1;

    } catch (const Array2<int>::IdxRngErr x) {
        cout << "添え字が範囲外 Array<int>: " << x.getIndex() << endl;
        return 1;

    } catch (const Array2<double>::IdxRngErr x) {
        cout << "添え字が範囲外 Array<double>: " << x.getIndex() << endl;
        return 1;
    }
}
