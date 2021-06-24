#ifndef ARRAY2_H_
#define ARRAY2_H_

#include <cstdlib>

template <class Type> class Array2 {
private:
    int nelem;
    Type *vec;
    bool isValidIndex(int idx) const { return idx >= 0 && idx < nelem; }

public:
    class IdxRngErr {
    private:
        const Array2* ident;
        int idx;

    public:
        IdxRngErr(const Array2* p, int i):
            ident(p), idx(i) {}

        int getIndex() const { return idx; }
    };

    explicit Array2(int size, const Type& v = Type()):
        nelem(size) {
        vec = new Type[nelem];
        for (int i = 0; i < nelem; i++) {
            vec[i] = v;
        }
    }

    Array2(const Array2<Type>& x) {
        if (&x == this) {
            nelem = 0;
            vec = NULL;
        } else {
            nelem = x.nelem;
            vec = new Type[nelem];
            for (int i = 0; i < nelem; i++) {
                vec[i] = x.vec[i];
            }
        }
    }

    ~Array2() { delete[] vec; }
    int size() const { return nelem; }

    Array2& operator=(const Array2<Type> &x) {
        if (&x != this) {
            if (nelem != x.nelem) {
                delete[] vec;
                nelem = x.nelem;
                vec = new Type[nelem];
            }
            for (int i = 0; i < nelem; i++) {
                vec[i] = x.vec[i];
            }
        }
        return *this;
    }

    Type& operator[](int i) {
        if (i < 0) throw IdxRngErr(this, i);
        if (!isValidIndex(i)) {
            Type* tmp = new Type[i];

            for (int j = 0; j < i; j++) {
                tmp[j] = vec[j];
                if (nelem < j) tmp[j] = Type();
            }

            vec = tmp;
        }
        return vec[i];
    }

    const Type& operator[](int i) const {
        if (!isValidIndex(i)) {
            throw IdxRngErr(this, i);
        }
        return vec[i];
    }
};

#endif //ARRAY2_H_
