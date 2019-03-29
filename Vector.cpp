//
// Created by rudri on 3/29/2019.
//

#include "Vector.h"

namespace UTEC {
    void vector::push_back(const int &value) {
        // Completarlo
    }

    void vector::pop_back() {
        // Completarlo
    }

    vector::vector() : _arr{nullptr}, _size(0) {}
    vector::~vector() {
        // Completarlo
    }

    int vector::size() {return _size;}

    int vector::get_item(int i) {return _arr[i];}
}