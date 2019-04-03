//
// Created by rudri on 3/29/2019.
//

#include "Vector.h"

namespace UTEC {

    void vector::push_back(const int &value) {
        if (_arr == nullptr){
            _arr = new int[1];
            _arr[0]=value;
        } else {
            int *p = new int[_size+1];
            for (int i = 0; i < _size; ++i)
                p[i]=_arr[i];
            p[_size]=value;
            delete []_arr;
            _arr=p;
        } _size++;
    }

    void vector::pop_back() {
        _size--;
        int *p = new int[_size];
        for (int i = 0; i < _size; ++i)
            p[i]=_arr[i];
        delete []_arr;
        _arr=p;
    }

    void vector::insert(int pos, const int& value){
        _size++;
        int *p = new int[_size];
        for (int i = 0; i < pos; ++i)
            p[i]=_arr[i];
        p[pos]=value;
        for (int i = pos; i < _size-1; ++i)
            p[i+1]=_arr[i];
        delete []_arr;
        _arr=p;
    }

    vector::vector() : _arr{nullptr}, _size(0) {}
    vector::~vector() {
        delete []_arr;
    }

    int vector::size() {return _size;}

    int vector::get_item(int i) {return _arr[i];}
}