#pragma once
#include <bits/stl_list.h>
#include "SortingAlgorithm.hpp"

template<typename T>
class BubbleSort: public SortingAlgorithm<T> {
public:
    void Sort(T* array, int size) override {
        for(int i = 0; i < size-1; ++i)
            for(int j = 0; j < size-1-i; ++j)
                if(array[j] > array[j+1])
                    std::swap(array[j], array[j+1]);
    }
};