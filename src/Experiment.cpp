#include "Experiment.hpp"
#include "ArrayGenerator.hpp"

#include<iostream>
using namespace std;

int main() {
    const int size = 10;
    int* arr = ArrayGenerator<int>::GenerateRandom(size, 0, 100);


    delete[] arr;

    return 0;
}