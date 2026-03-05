#pragma once
#include <cstdlib>
#include <type_traits>

template <typename T>
class ArrayGenerator {
public:
    static T* GenerateRandom(int size, T minValue, T maxValue) {
        T* array = new T[size];
        for (int i = 0; i < size; ++i) {
            if constexpr (std::is_integral_v<T>) {
                array[i] = minValue + rand() % (maxValue - minValue + 1);
            }
            else if constexpr (std::is_floating_point_v<T>) {
                array[i] = minValue + (maxValue - minValue) * (rand() / (double)RAND_MAX);
            }
        }
        return array;
    }

    static T* GenerateAscending(int size) {
        T* array = new T[size];
        for (int i = 0; i < size; ++i) {
            array[i] = i;
        }
        return array;
    }

    static T* GenerateDescending(int size) {
        T* array = new T[size];
        for (int i = 0; i < size; ++i) {
            array[i] = size - i;
        }
        return array;
    }
};